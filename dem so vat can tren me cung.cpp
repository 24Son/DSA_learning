#include<bits/stdc++.h>

using namespace std;

int main () {
        int n, m;
    cin >> n >> m;
        char a[n][m];
        int b[n][m];
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> a[i][j];
            b[i][j]=1;
        }
    }
        int cnt=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (a[i][j] == '#' && b[i][j] == 1) {
                    int logic1=1, logic2=1;
                    int res1=i, res2=j;
                while (a[i][res2] == '#') {
                    if (b[i][res2] == 0) {
                        logic2=0;
                    } 
                    b[i][res2]=0;
                    res2++;
                    if (res2==m) break;
                }
                b[i][j]=1;
                while (a[res1][j] == '#') {
                    if (b[res1][j] == 0) {
                        logic1=0;
                    }
                    b[res1][j]=0;
                    res1++;
                    if (res1==n) break;
                }
                if (logic1==1 && logic2==1) cnt++;           
            }
        }
    }
    cout << cnt << endl;
}