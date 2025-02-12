#include<bits/stdc++.h>

using namespace std;

int v[105][105];
int x[100005];
int sum, n, m;

// 0: down, 1: right;

bool kt () {
        int cnt=0;
    for (int i=0; i<=n+m-3; i++) {
        if (x[i]==0) cnt++;
    }
    if (cnt==n-1) return 1;
    return 0;
}

void Try (int i) {
    for (int j=0; j<=1; j++) {
        x[i]=j;
        if (i==n+m-3) {
            if (kt()==1) sum++;
        }
        else Try(i+1);
    }
}

void solve () {
        cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) cin >> v[i][j];
    }
    Try(0);
    cout << sum << endl;
}

void Test () {
        int t;
    cin >> t;
    while (t--) {
        sum=0;
        solve();
    }
}

int main () {
    Test();
}