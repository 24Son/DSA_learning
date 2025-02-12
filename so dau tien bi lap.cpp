#include<bits/stdc++.h>

using namespace std;

void solve () {
        int n;
    cin >> n;
        map<int, int> mp;
        vector<int> v(n);
    for (int i=0; i<n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }
        int logic=0;
    for (int i=0; i<n; i++) {
        if (mp[v[i]]>1) {
            cout << v[i];
            logic=1;
            break;
        }
    }
    if (logic==0) cout << "NO";
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