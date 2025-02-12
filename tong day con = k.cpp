#include<bits/stdc++.h>

using namespace std;

int x[100005], a[100005];
int n, k, cnt=0;

void in_kq () {
    for (int i=0; i<n; i++) {
        if (x[i]==1) cout << a[i] << ' ';
    }
    cout << endl;
}

bool kt () {
        int sum=0;
    for (int i=0; i<n; i++) {
        sum += x[i]*a[i];
    }
    if (sum==k) return 1;
    return 0;
}

void Try (int i) {
    for (int j=0; j<=1; j++) {
        x[i]=j;
        if (i==n-1) {
            if (kt()) {
                in_kq();
                cnt++;
            }
        }
        else Try(i+1);
    }
}

int main () {
    cin >> n >> k;
    for (int i=0; i<n; i++) cin >> a[i];
    Try(0);
    cout << cnt;
}