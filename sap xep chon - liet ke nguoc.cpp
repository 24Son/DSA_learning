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
        vector<int> v(n);
        vector<vector<int>> a;
    for (int i=0; i<n; i++) cin >> v[i];
    for (int i=0; i<n-1; i++) {
            vector<int> b;
            int tmp=v[i], res=i;
        for (int j=i+1; j<n; j++) {
            if (v[j] < tmp) {
                tmp=v[j];
                res=j;
            }
        }
        swap(v[i], v[res]);
        for (int j=0; j<n; j++) b.push_back(v[j]);
        a.push_back(b);
    }
    for (int i=n-2; i>=0; i--) {
        cout << "Buoc " << i+1 << ": ";
        for (int j=0; j<n; j++) cout << a[i][j] << ' ';
        cout << endl;
    }
}

int main () {
    solve();
}