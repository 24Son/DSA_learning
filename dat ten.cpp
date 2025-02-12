#include<bits/stdc++.h>

using namespace std;

int n, k;
vector<string> v;
int x[1005];
set<string> se;

void in_kq () {
    for (int i=1; i<=k; i++) {
        cout << v[x[i]-1] << ' ';
    }
    cout << endl;
}

void Try (int i) {
    for (int j=x[i-1]+1; j<=n-k+i; j++) {
        x[i]=j;
        if (i==k) in_kq();
        else Try(i+1);
    }
}

void solve () {    
    cin >> n >> k;
    for (int i=0; i<n; i++) {
            string s;
        cin >> s;
        se.insert(s);
    }
    for (auto i:se) v.push_back(i);
        n=v.size();
    Try(1);
}

int main () {
    solve();
}