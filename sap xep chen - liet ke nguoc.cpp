#include<bits/stdc++.h>

using namespace std;

void solve () {
        int n;
    cin >> n;
        vector<int> v(n), a;
    for (int i=0; i<n; i++) cin >> v[i];
        vector<vector<int>> b;
    for (int i=0; i<n; i++) {
        a.push_back(v[i]);
        sort(a.begin(), a.end());
        b.push_back(a);
    }
    for (int i=n-1; i>=0; i--) {
        cout << "Buoc " << i << ": ";
        for (int j=0; j<b[i].size(); j++) cout << b[i][j] << ' ';
        cout << endl;
    }
}

int main () {
    solve();
}