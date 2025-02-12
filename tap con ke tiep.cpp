#include<bits/stdc++.h>

using namespace std;

int n, k;
int a[10005];

void in_kq () {
    for (int i=0; i<k; i++) cout << a[i] << ' ';
    cout << endl;
}

void sinh () {
        int logic=0;
    for (int i=k-1; i>=0; i--) {
        if (a[i] < n-k+i+1) {
            logic=1;
            a[i]++;
            for (int j=i+1; j<k; j++) a[j]=a[i]+j-i;
            in_kq();
            break;
        }
    }
    if (logic==0) {
        for (int i=0; i<k; i++) cout << i+1 << ' ';
        cout << endl;
    }
} 

int main () {
        int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i=0; i<k; i++) cin >> a[i];
        sinh();
    }
}