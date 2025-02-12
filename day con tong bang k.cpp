#include <bits/stdc++.h>

using namespace std;

int n, k, m, fl;
int x[100005], a[100005];

void in_kq()
{
    int logic = 0;
    if (m == 1 && x[0] == 1)
    {
        cout << '[' << a[0] << "] ";
        fl = 1;
        logic = 1;
    }
    if (logic == 0)
    {
        vector<int> v;
        for (int i = 0; i < m; i++)
        {
            if (x[i] == 1)
            {
                logic = 1;
                fl = 1;
                v.push_back(a[i]);
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (i == 0)
                cout << '[' << v[i] << ' ';
            else if (i > 0 && i < v.size() - 1)
                cout << v[i] << ' ';
            else
                cout << v[i] << "] ";
        }
    }
}

bool kt()
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += x[i] * a[i];
    }
    if (sum == k)
        return 1;
    return 0;
}

void Try(int i)
{
    for (int j = 1; j >= 0; j--)
    {
        x[i] = j;
        if (i == m - 1)
        {
            if (kt())
                in_kq();
        }
        else
            Try(i + 1);
    }
}

void solve()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    fl = 0;
    m = n;
    Try(0);
    if (fl == 0)
        cout << -1;
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