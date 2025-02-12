#include<bits/stdc++.h>

using namespace std;


bool kt1 (int n, int x[], int a[]) {
    for (int i=0; i<n; i++) {
        if (x[i] != a[i]) return 1;
    }
    return 0;
}

bool kt2 (int n, int x[]) {
    for (int i=n-2; i>=0; i--) {
        if (x[i] < x[i+1]) return 1;
    }
    return 0;
}

void stt (int n, int x[], int a[]) {
        int cnt=0;
    for (int i=0; i<n; i++) x[i]=i+1;
    cnt++;
    while (kt1(n, x, a) == 1) {
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
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;
}

int main () {
        int t;
    cin >> t;
    while (t--) {
            int n;
        cin >> n;
            int x[n], a[n];
        for (int i=0; i<n; i++) cin >> a[i];
        stt(n, x, a);
    }
}