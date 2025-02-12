#include<bits/stdc++.h>

using namespace std;

void TestCase () {
        int t;
    cin >> t;
    while (t--) {
            int n;
        cin >> n;
            vector<int> a(n), b(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
            b[i]=a[i];
        }
        sort(a.begin(), a.end());
            int res1, res2;
        // for (int i=0; i<n; i++) cout << a[i] << ' ';
        // cout << endl;
        for (int i=0; i<n; i++) {
            if (a[i] != b[i]) {
                res1=i;
                break; 
            }
        }
        for (int i=n-1; i>=0; i--) {
            if (a[i] != b[i]) {
                res2=i;
                break;
            }
        }
        cout << res1+1 << ' ' << res2+1 << endl;
    }
}

int main () {
    TestCase();
}