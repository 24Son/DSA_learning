#include<bits/stdc++.h>

using namespace std;

int n, k;
int x[100005], a[100005];
map<int, int> mp;

void in_kq () {
    for (int i=1; i<=k; i++) cout << x[i] << ' ';
    cout << endl;
}

void Try (int i) {
    for (int j=x[i-1]+1; j<=n-k+i; j++) {
        x[i]=j;
        if (mp[x[i]]==0) continue;
        if (i==k) {
            in_kq();
        }
        else Try(i+1);
    }
}

void TestCase () {
    cin >> n >> k;
    for (int i=1; i<=n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(a, a+n);
    n=a[n-1];
    Try(1);
    mp.clear();
}

int main () {
    TestCase();
}