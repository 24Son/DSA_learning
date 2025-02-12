#include <bits/stdc++.h>

using namespace std;

vector<string> st;

void solve()
{
    string s;
    while (getline(cin, s))
    {
        stringstream ss(s);
        string tmp;
        vector<string> v;
        while (ss >> tmp)
        {
            v.push_back(tmp);
        }
        if (v[0] == "push")
            st.push_back(v[1]);
        else if (v[0] == "pop")
        {
            if (st.size()>0) st.pop_back();
            else continue;
        }
        else
        {
            if (st.size() == 0)
            {
                cout << "empty";
            }
            else
            {
                for (auto i : st)
                    cout << i << ' ';
            }
            cout << endl;
        }
    }
}

int main()
{
    solve();
}