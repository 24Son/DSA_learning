#include<bits/stdc++.h>

using namespace std;

void solve () {
        int n;
    cin >> n;
        vector<int> v(n), a;
        map<int, int> mp;
    for (int i=0; i<n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }
        int tmp=n/2;
    for (auto i:mp) {
        if (i.second>tmp) {
            tmp=i.second;
        }
    }
        int logic=0;
    for (auto i:mp) {
        if (i.second==tmp && i.second>n/2) {
            cout << i.first;
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