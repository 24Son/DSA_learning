#include<bits/stdc++.h>

using namespace std;

int n, k;
int a[100005];

int new_number () {
        int cnt=0, logic=0;
        map<int, int> mp1, mp2;
    for (int i=0; i<k; i++) mp1[a[i]]++;
    for (int i=k-1; i>=0; i--) {
        if (a[i] < n-k+i+1) {
            a[i]++;
            for (int j=i+1; j<k; j++) a[j]=a[i]+j-i;
            for (int j=0; j<k; j++) mp2[a[j]]++;
            for (int j=0; j<k; j++) {
                if (mp1[a[j]]==0 && mp2[a[j]]==1) {
                    logic=1;
                    cnt++;
                }
            }
            break;
        }
    }
    if (logic==0) return k;
    else return cnt;
}

int main () {
        int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i=0; i<k; i++) cin >> a[i];
        cout << new_number() << endl;
    }
}