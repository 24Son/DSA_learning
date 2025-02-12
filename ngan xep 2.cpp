#include <bits/stdc++.h>

using namespace std;

stack<int> st;

void solve()
{
    string s;
    cin >> s;
    if (s == "PUSH")
    {
        int n;
        cin >> n;
        st.push(n);
    }
    else if (s == "PRINT")
    {
        if (st.empty())
            cout << "NONE";
        else
            cout << st.top();
        cout << endl;
    }
    else
    {
        if (st.empty() == 0)
            st.pop();
    }
}

void Test()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

int main()
{
    Test();
}