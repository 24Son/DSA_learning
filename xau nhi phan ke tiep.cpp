#include<bits/stdc++.h>

using namespace std;

string xau_NP_ke_tiep (string &s) {
        int logic=0;
    for (int i=s.size()-1; i>=0; i--) {
        if (s[i] == '0') {
            logic=1;
            s[i]='1';
            for (int j=i+1; j<s.size(); j++) s[j]='0';
            return s;
        }
    }
    if (logic == 0) {
        for (int i=0; i<s.size(); i++) s[i]='0';
        return s;
    }
}

int main () {
        int t;
    cin >> t;
    cin.ignore();
    while (t--) {
            string s;
        cin >> s;
        cout << xau_NP_ke_tiep(s) << endl;
    }
}