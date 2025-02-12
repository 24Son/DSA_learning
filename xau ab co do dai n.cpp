#include<bits/stdc++.h>

using namespace std;

int n;
int x[100005];

void in_kq () {
    for (int i=0; i<n; i++) {
        if (x[i]==0) cout << 'A';
        else cout << 'B';
    }
    cout << ' ';
}

void sinh_xau_NP (int i) {
    for (int j=0; j<=1; j++) {
        x[i]=j;
        if (i==n-1) in_kq();
        else sinh_xau_NP(i+1);
    }
}

int main () {
        int t;
    cin >> t;
    while (t--) {
        cin >> n;
        sinh_xau_NP(0);
        cout << endl;
    }
}