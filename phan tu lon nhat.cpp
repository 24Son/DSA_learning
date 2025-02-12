#include<bits/stdc++.h>

using namespace std;

void solve () {
        int n, k;
    cin >> n >> k;
        vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    for (int i=n-1; i>=0; i--) {
        cout << v[i] << ' ';
        k--;
        if (k==0) break;
    }
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