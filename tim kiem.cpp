#include<bits/stdc++.h>

using namespace std;

bool binary_search (vector<int> v, int n, int x) {
        int l=0, r=n-1;
    while (l <= r) {
            int mid = (l+r)/2;
        if (v[mid] == x) return 1;
        else if (v[mid] < x) {
            l=mid+1;
        }
        else {
            r=mid-1;
        }
    }
    return 0;
}

void Test () {
        int t;
    cin >> t;
    while (t--) {
            int n, x;
        cin >> n >> x;
            vector<int> v(n);
        for (int i=0; i<n; i++) cin >> v[i];
        if (binary_search(v, n, x)==1) cout << 1;
        else cout << -1;
        cout << endl;
    }
}

int main () {
    Test();
}