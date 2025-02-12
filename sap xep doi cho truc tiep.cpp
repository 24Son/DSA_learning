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
    for (int i=0; i<n; i++) cin >> v[i];
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (v[i] > v[j]) swap(v[i], v[j]);
        }
        cout << "Buoc " << i+1 << ": ";
        for (int h=0; h<n; h++) cout << v[h] << ' ';
        cout << endl;
    }
}

void Test () {
    solve();
}

int main () {
    Test();
}