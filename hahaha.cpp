#include<bits/stdc++.h>

using namespace std;

int n;
int x[1000005];

void in_kq () {
    for (int i=0; i<n; i++) {
        if (x[i]==1) cout << 'H';
        else cout << 'A';
    }
    cout << endl;
}

bool kt () {
    if (x[0] != 1 || x[n-1] != 0) return 0;
    for (int i=0; i<n-1; i++) {
        if (x[i]==1 && x[i+1]==1) return 0;
    }
    return 1;
}

void sinh_xau_NP (int i) {
    for (int j=0; j<=1; j++) {
        x[i]=j;
        if (i==n-1) {
            if (kt()==1) in_kq();
        }
        else sinh_xau_NP(i+1);
    }
}

int main () {
        int t;
    cin >> t;
    while (t--) {
        cin >> n;
        sinh_xau_NP(0);
    }
}