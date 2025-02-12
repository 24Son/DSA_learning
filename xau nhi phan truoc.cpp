#include<bits/stdc++.h>

using namespace std;

void before_bit_string (string &s) {
        int logic=0;
    for (int i=s.size()-1; i>=0; i--) {
        if (s[i]=='1') {
            logic=1;
            s[i]='0';
            for (int j=i+1; j<s.size(); j++) s[j]='1';
            cout << s << endl;
            break;
        }
    }
    if (logic==0) {
        for (int i=0; i<s.size(); i++) cout << '1';
        cout << endl;
    }
}

int main () {
        int t;
    cin >> t;
    cin.ignore();
    while (t--) {
            string s;
        cin >> s;
        before_bit_string(s);
    }
}