#include <bits/stdc++.h>

using namespace std;

int value[15] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    while (n != 0)
    {
        for (int i = 9; i >= 0; i--)
        {
            while (value[i] <= n)
            {
                n = n - value[i];
                cnt++;
            }
        }
    }
    return cnt;
}

void Test()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
}

int main()
{
    Test();
}