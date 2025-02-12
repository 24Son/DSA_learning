#include <bits/stdc++.h>

using namespace std;

int x[100005];
int n;
int a[15][15];
int logic;

void in_kq()
{
    for (int i = 0; i < n * 2 - 2; i++)
    {
        if (x[i] == 0)
            cout << 'D';
        else
            cout << 'R';
    }
    cout << ' ';
}

// 0: turn down,  1: turn right;

bool kt()
{
    int row = 0, column = 0;
    for (int i = 0; i < n * 2 - 2; i++)
    {
        if (a[row][column] == 1)
        {
            if (x[i] == 1)
                column++;
            else
                row++;
        }
        else
            return 0;
    }
    if (row < n && column < n)
        return 1;
    return 0;
}

void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if (n < 2)
            break;
        if (i == n * 2 - 3)
        {
            if (kt() == 1)
            {
                in_kq();
                logic = 1;
            }
        }
        else
            Try(i + 1);
    }
}

void solve()
{
    logic = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    Try(0);
    if (logic == 0)
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