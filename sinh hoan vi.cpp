#include<bits/stdc++.h>

using namespace std;

int n;
int x[100005];

void in_kq () {
    for (int i=0; i<n; i++) cout << x[i];
    cout << ' ';
}

bool kt () {
    for (int i=n-2; i>=0; i--) {
        if (x[i] < x[i+1]) return 1;
    }
    return 0;
}

void sinh () {
    for (int i=0; i<n; i++) x[i]=i+1;
    in_kq();
    while (kt()==1) {
        for (int i=n-2; i>=0; i--) {
            if (x[i] < x[i+1]) {
                    int tmp=i;
                sort(x+tmp+1, x+n);
                for (int j=tmp+1; j<n; j++) {
                    if (x[tmp] < x[j]) {
                            int d=x[tmp];
                        x[tmp]=x[j];
                        x[j]=d;
                        break;
                    }
                }
                sort(x+tmp+1, x+n);
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
        cin >> n;
        sinh();
        cout << endl;
    }
}