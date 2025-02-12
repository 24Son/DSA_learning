#include<bits/stdc++.h>

using namespace std;

#define mod 1000000007

void solve () {
        int n;
    cin >> n;
        vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());
        long long sum=0;
    for (int i=0; i<n; i++) {
        sum += (i%mod)*(v[i]%mod);
        sum %= mod;
    }
    cout << sum << endl;
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