#include<bits/stdc++.h>

using namespace std;

void solve () {
        int n;
    cin >> n;
        vector<int> v;
        map<int, int> mp;
    for (int i=1; i<=n; i++) {
            int x;
        cin >> x;
        mp[x]++;
    }
    for (auto i:mp) {
        v.push_back(i.first);
    }
        int logic=0;
    if (mp.size()==1) cout << -1;
    else cout << v[0] << ' ' << v[1];
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