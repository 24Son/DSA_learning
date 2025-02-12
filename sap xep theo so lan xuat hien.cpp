#include<bits/stdc++.h>

using namespace std;

struct number {
    int value, freq;
};

bool sosanh (number a, number b) {
    if (a.freq > b.freq) return 1;
    else if (a.freq == b.freq) {
        if (a.value < b.value) return 1;
    }
    return 0;
}

void sapxep (number x[], int n) {
    sort(x, x+n, sosanh);
}

void in_kq (number x[], int n) {
    for (int i=0; i<n; i++) cout << x[i].value << ' ';
    cout << endl;
}

void solve () {
        int n;
    cin >> n;
        vector<int> v(n);
        map<int, int> mp;
    for (int i=0; i<n; i++) {
        cin >> v[i]; 
        mp[v[i]]++;
    }
        number x[n];
    for (int i=0; i<n; i++) {
        x[i].value=v[i];
        x[i].freq=mp[v[i]];
    }
    sapxep(x, n);
    in_kq(x, n);
}

void Test () {
        int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

typedef number number;

int main () {
    Test();
}