#include<bits/stdc++.h>

using namespace std;

int prime[1000005];

void sieve () {
    for (int i=0; i<=1000005; i++) prime[i]=1;
    prime[0]=prime[1]=0;
    for (int i=2; i<=sqrt(1000005); i++) {
        if (prime[i]) {
            for (int j=i*i; j<=1000005; j+=i) prime[j]=0;
        }
    }
}

void solve () {
        int n;
    cin >> n;
        int logic=0;
    for (int i=2; i<=n; i++) {
        if (prime[i] && prime[n-i]) {
            logic=1;
            cout << i << ' ' << n-i;
            break;
        }
    }
    if (logic==0) cout << -1;
    cout << endl; 
}

void Test () {
        int t;
    cin >> t;
    sieve();
    while (t--) {
        solve();
    }
}

int main () {
    Test();
}