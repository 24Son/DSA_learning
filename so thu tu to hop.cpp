#include<bits/stdc++.h>

using namespace std;

int n, k;
int x[100005], a[100005];

bool kt () {
    for (int i=0; i<k; i++) {
        if (x[i] != a[i]) return 1;
    }
    return 0;
}

void stt () {
        int cnt=1;
    for (int i=0; i<k; i++) x[i]=i+1; 
    while (kt()) {
        for (int i=k-1; i>=0; i--) {
            if (x[i] < n-k+i+1) {
                x[i]++;
                    int tmp=i;
                for (int j=tmp+1; j<k; j++) x[j]=x[i]+j-i;
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
            cin >> n >> k;
        for (int i=0; i<k; i++) cin >> a[i];
        stt();
    }
}