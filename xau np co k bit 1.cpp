#include<bits/stdc++.h>

using namespace std;

int n, k;
int x[100005];

void in_kq () {
    for (int i=0; i<n; i++) cout << x[i];
    cout << endl;
}

bool kt () {
        int sum=0;
    for (int i=0; i<n; i++) sum+=x[i];
    if (sum==k) return 1;
    return 0;
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
        cin >> n >> k;
        sinh_xau_NP(0);
    }
}