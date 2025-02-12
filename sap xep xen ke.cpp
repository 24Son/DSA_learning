#include<bits/stdc++.h>

using namespace std;

void solve (int n, vector<int> v) {
        vector<int> tmp;
    sort(v.begin(), v.end());
    for (int i=v.size()-1; i>=0; i--) tmp.push_back(v[i]);
        int res1=0, res2=0;
    for (int i=0; i<v.size(); i++) {
        if (i%2==0) {
            cout << tmp[res1];
            res1++;
        }
        else {
            cout << v[res2];
            res2++;
        }
        cout << ' ';
    }
    cout << endl;
}

void TestCase () {
        int t;
    cin >> t;
    while (t--) {
            int n;
        cin >> n;
        vector<int> v;
        for (int i=0; i<n; i++) {
                int x;
            cin >> x;
            v.push_back(x);
        }
        solve(n, v);
    }
}

int main () {
    TestCase();
}