#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        vector<int> tmp(k);
        if (i <= n - k)
        {
            for (int j = i; j < i + k; j++)
                tmp.push_back(v[j]);
            sort(tmp.begin(), tmp.end());
            cout << tmp[tmp.size() - 1] << ' ';
        }
        else
            break;
    }
    cout << endl;
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