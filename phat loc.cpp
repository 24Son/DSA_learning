#include<bits/stdc++.h>

using namespace std;

int n;
int x[100005];

void in_kq () {
    for (int i=0; i<n; i++) {
        if (x[i]==0) cout << 8;
        else cout << 6;
    }
    cout << endl;
}

bool kt () {
    if (x[0] != 0 || x[n-1] != 1) return 0;
    for (int i=0; i<n-1; i++) {
        if (x[i]==0 && x[i+1]==0) return 0;
    }
    for (int i=0; i<n; i++) {
        if (x[i]==1) {
                int cnt=0, tmp=i;
            while (x[tmp]==1) {
                cnt++;
                tmp++;
            }
            if (cnt>3) return 0;
        }
    }
    return 1;
}

void sinh_xau_NP (int i) {
    for (int j=1; j>=0; j--) {
        x[i]=j;
        if (i==n-1) {
            if (kt()==1) in_kq();
        }
        else sinh_xau_NP(i+1); 
    }
}

int main () {
    cin >> n;
    sinh_xau_NP(0);
}