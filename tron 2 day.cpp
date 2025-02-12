#include<bits/stdc++.h>

using namespace std;

void solve () {
        int n, m;
    cin >> n >> m;
        vector<int> v(n+m);
    for (int i=0; i<n+m; i++) cin >> v[i];
    sort(v.begin(), v.end());
    for (int i:v) cout << i << ' ';
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