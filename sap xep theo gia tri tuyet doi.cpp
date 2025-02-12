#include<bits/stdc++.h>

using namespace std;

struct number {
    int value, id;
};

int k;

void in_kq (number d[], int n) {
    for (int i=0; i<n; i++) {
        cout << d[i].value << ' ';
    }
    cout << endl;
}

bool sosanh (number a, number b) {
    if (abs(a.value-k) < abs(b.value-k)) return 1;
    else if (abs(a.value-k) == abs(b.value-k)) {
        if (a.id < b.id) return 1;
    }
    return 0;
}

void sapxep (number d[], int n) {
    sort(d, d+n, sosanh);
}

void TestCase () {
        int t;
    cin >> t;
    while (t--) {
            int n;
        cin >> n >> k;
            number d[n];
        for (int i=0; i<n; i++) {
            cin >> d[i].value;
            d[i].id=i;
        }
        sapxep(d, n);
        in_kq(d, n);
    }
}

typedef struct number number;

int main () {
    TestCase();
}