#include<bits/stdc++.h>

using namespace std;

void solve () {
        int n, x;
    cin >> n >> x;
        vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    for (int i=0; i<n; i++) {
        if (v[i]==x) {
            cout << i+1 << endl;
            break;
        }
    }
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