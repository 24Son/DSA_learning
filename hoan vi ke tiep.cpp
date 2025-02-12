#include<bits/stdc++.h>

using namespace std;

int n;
int a[1000005];

void in_kq () {
    for (int i=0; i<n; i++) cout << a[i] << ' ';
    cout << endl;
}

void hoan_vi_ke_tiep () {
        int logic=0;
    for (int i=n-2; i>=0; i--) {
        if (a[i] < a[i+1]) {
            logic=1;
                int tmp=i;
            sort(a+tmp+1, a+n);
            for (int j=tmp+1; j<n; j++) {
                if (a[j]>a[tmp]) {
                        int d=a[j];
                    a[j]=a[tmp];
                    a[tmp]=d;
                    break;
                }
            }
            sort(a+tmp+1, a+n);
            in_kq();
            break;
        }
    }
    if (logic==0) {
        for (int i=1; i<=n; i++) cout << i << ' ';
        cout << endl;
    }
}

int main () {
        int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i=0; i<n; i++) cin >> a[i];
        hoan_vi_ke_tiep();
    }
}