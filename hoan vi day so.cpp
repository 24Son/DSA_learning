#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> v;

bool kt () {
    for (int i=n-2; i>=0; i--) {
        if (v[i] < v[i+1]) return 1;
    }
    return 0;
}

void in_kq () {
    for (int i=0; i<n; i++) {
        cout << v[i] << ' ';
    }
    cout << endl;
}

void sinh_hoan_vi () {
    in_kq();
    while (kt()==1) {
        for (int i=n-2; i>=0; i--) {
            if (v[i] < v[i+1]) {
                    int tmp=i;
                sort(v.begin()+tmp+1, v.end());
                for (int j=tmp+1; j<n; j++) {
                    if (v[tmp] < v[j]) {
                            int d=v[tmp];
                        v[tmp]=v[j];
                        v[j]=d;
                        break;
                    }
                }
                sort(v.begin()+tmp+1, v.end());
                in_kq();
                break;
            }
        }
    }
}

int main () {
    cin >> n;
    for (int i=0; i<n; i++) {
            int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    sinh_hoan_vi();
}