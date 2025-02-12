#include<bits/stdc++.h>

using namespace std;

int n, k;
int x[100005];

void in_kq () {
    for (int i=0; i<k; i++) cout << x[i];
    cout << ' ';
}

bool kt () {
    for (int i=k-1; i>=0; i--) {
        if (x[i] < n-k+i+1) return 1;
    }
    return 0;
}

void sinh () {
    for (int i=0; i<k; i++) x[i]=i+1;
    in_kq();
    while (kt()==1) {
        for (int i=k-1; i>=0; i--) {
            if (x[i] < n-k+i+1) {
                x[i]++;
                for (int j=i+1; j<k; j++) x[j]=x[i]+j-i;
                in_kq();
                break;
            }
        }
    }
}

int main () {
        int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        sinh();
        cout << endl;
    }
}