#include<bits/stdc++.h>

using namespace std;

void solve () {
        int n, m, k;
    cin >> n >> m >> k;
        vector<int> v(n+m);
    for (int i=0; i<n+m; i++) cin >> v[i];
    sort(v.begin(), v.end());
    cout << v[k-1] << endl;
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