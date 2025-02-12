#include<bits/stdc++.h>

using namespace std;

void solve () {
        int n;
    cin >> n;
        vector<int> v(n), a;
    for (int i=0; i<n; i++) cin >> v[i];
    for (int i=0; i<n; i++) {
        a.push_back(v[i]);
        sort(a.begin(), a.end());
        cout << "Buoc " << i << ": ";
        for (int h:a) cout << h << ' ';
        cout << endl;
    }
}

void Test () {
    solve();
}

int main () {
    Test();
}