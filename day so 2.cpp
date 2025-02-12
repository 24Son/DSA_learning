#include<bits/stdc++.h>

using namespace std;

void in_kq (int n, vector<int> v) {
    if (n==1) cout << '[' << v[0] << ']' << ' ';
    else {
        for (int i=0; i<n; i++) {
            if (i==0) cout << '[' << v[i];
            else if (i==n-1) cout << ' ' << v[i] << ']' << ' ';
            else cout << ' ' << v[i];
        }
    }
}

void solve (int n, vector<int> &v) {
        vector<vector<int>> res;
    res.push_back(v);
        int tmp=1;
    for (int i=1; i<=n; i++) {
            vector<int> vc;
        for (int j=0; j<n-tmp; j++) {
            v[j]=v[j]+v[j+1];
            vc.push_back(v[j]);
        }
        res.push_back(vc);
        tmp++;
    }
    for (int i=n-1; i>=0; i--) {
        in_kq(res[i].size(), res[i]);
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
        cout << endl;
    }
}