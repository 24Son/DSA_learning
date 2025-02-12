#include<bits/stdc++.h>

using namespace std;

void solve () {
        int n;
    cin >> n;
        vector<int> v(n);
        map<int, int> mp;
    for (int i=0; i<n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }
    sort(v.begin(), v.end());
        int cnt=0;
    for (int i=v[0]; i<=v[n-1]; i++) {
        if (mp[i]==0) cnt++;
    }
    cout << cnt << endl;
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