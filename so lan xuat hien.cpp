#include<bits/stdc++.h>

using namespace std;

void solve () {
        int n, k;
    cin >> n >> k;
        vector<int> v(n);
        map<int, int> mp;
    for (int i=0; i<n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }
    if (mp[k] > 0) cout << mp[k];
    else cout << -1;
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