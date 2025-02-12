#include<bits/stdc++.h>

using namespace std;

int x[100005];
int n;

void in_kq () {
    for (int i=0; i<n; i++) cout << x[i] << ' ';
    cout << endl;
}

bool doi_xung () {
    for (int i=0; i<n; i++) {
        if (x[i] != x[n-1-i]) return 0;
    }
    return 1;
}

void sinh_xau_NP (int i) {
    for (int j=0; j<=1; j++) {
        x[i]=j;
        if (i==n-1) {
            if (doi_xung()) in_kq();
        }
        else sinh_xau_NP(i+1);
    }
}

int main () {
    cin >> n;
    sinh_xau_NP(0);
}