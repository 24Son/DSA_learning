#include<bits/stdc++.h>

using namespace std;

void swap (int &a, int &b) {
        int tmp=a;
    a=b;
    b=tmp;
}

void solve () {
        int n;
    cin >> n;
        vector<vector<int>> a;
        vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    for (int i=0; i<n; i++) {
            int logic=0;
            vector<int> res;
        for (int j=0; j<n-i-1; j++) {
            if (v[j] > v[j+1]) {
                swap(v[j], v[j+1]);
                logic=1;
            }
        }
        if (logic==0) break;
        for (int h=0; h<n; h++) res.push_back(v[h]);
        a.push_back(res);
    }
    for (int i=a.size()-1; i>=0; i--) {
        cout << "Buoc " << i+1 << ": ";
        for (int j=0; j<n; j++) cout << a[i][j] << ' ';
        cout << endl;
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