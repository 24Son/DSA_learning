#include<bits/stdc++.h>

using namespace std;

void in_kq (int n, vector<int> v) {
    for (int i=0; i<n; i++) {
        if (i==0) cout << '[' << v[i];
        else if (i==n-1) cout << ' ' << v[i] << ']' << endl;
        else cout << ' ' << v[i];
    }
}

void solve (int n, vector<int> &v) {
    if (n>1) in_kq(n, v);
        int tmp=1;
    for (int i=1; i<=n; i++) {
        for (int j=0; j<n-tmp; j++) {
            v[j]=v[j]+v[j+1];
        }
        if (n-tmp>1) in_kq(n-tmp, v);
        else {
            cout << '[' << v[0] << ']' << endl;
            break;
        }
        tmp++;
    }
}

int main () {
        int t;
    cin >> t;
    while (t--) {
            int n;
        cin >> n;
            vector<int> v;
        for (int i=0; i<n; i++) {
                int x;
            cin >> x;
            v.push_back(x);
        }
        solve(n, v);
    }
}