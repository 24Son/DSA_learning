#include<bits/stdc++.h>

using namespace std;

int n;
int x[100005], unused[100005];

void khoi_tao () {
    for (int i=0; i<=100005; i++) unused[i]=1;
}

void in_kq () {
    for (int i=0; i<n; i++) cout << x[i];
    cout << ' ';
}

void Try (int i) {
    for (int j=n; j>=1; j--) {
        if (unused[j]) {
            x[i]=j;
            unused[j]=0;
            if (i==n-1) in_kq();
            else Try(i+1);
            unused[j]=1;
        }
    }
}

int main () {
    khoi_tao();
        int t;
    cin >> t;
    while (t--) {
        cin >> n;
        Try(0);
        cout << endl;
    }
}