#include<bits/stdc++.h>

using namespace std;

void TestCase () {
        int t;
    cin >> t;
    while (t--) {
            int n, m;
        cin >> n >> m;
            vector<int> a(n), b(m);
            map<int, int> mp1, mp2, mp;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            mp1[a[i]]++;
            mp[a[i]]++;
        }
        for (int i=0; i<m; i++) {
            cin >> b[i];
            mp2[b[i]]++;
            mp[b[i]]++;
        }
        for (auto i:mp) {
            cout << i.first << ' ';
        }
        cout << endl;
        sort(a.begin(), a.end());
        for (int i=0; i<n; i++) {
            if (mp2[a[i]] != 0) cout << a[i] << ' ';
        }
        cout << endl;
    }
}

int main () {
    TestCase();
}