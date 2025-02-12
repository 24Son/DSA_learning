#include<bits/stdc++.h>

using namespace std;

int n;
int x[100005], unused[100005];
map<int, char> mp;

void khoi_tao () {
    for (int i=1; i<=n; i++) {
        unused[i]=1;
    }
} 

void in_kq () {
    for (int i=1; i<=n; i++) {
        cout << mp[x[i]];
    }
    cout << ' ';
}

void Try (int i) {
    for (int j=1; j<=n; j++) {
        if (unused[j]) {
            x[i]=j;
            unused[j]=0;
            if (i==n) in_kq();
            else Try(i+1);
            unused[j]=1;
        }
    }
}

void solve () {
        string s;
    cin >> s;
        n=s.size();
    for (int i=0; i<s.size(); i++) {
        mp[i+1]=s[i];
    }
    khoi_tao();
    Try(1);
    cout << endl;
}

void Test () {
        int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

int main () {
    Test();
}