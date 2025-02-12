#include <bits/stdc++.h>

using namespace std;

long long number_min(string a, string b)
{
    long long sum1 = 0, sum2 = 0, sum;
    for (auto i : a)
    {
        if (i == '6')
            i = '5';
        sum1 = sum1 * 10 + i - '0';
    }
    for (auto i : b)
    {
        if (i == '6')
            i = '5';
        sum2 = sum2 * 10 + i - '0';
    }
    sum = sum1 + sum2;
    return sum;
}

long long number_max(string a, string b)
{
    long long sum1 = 0, sum2 = 0, sum;
    for (auto i : a)
    {
        if (i == '5')
            i = '6';
        sum1 = sum1 * 10 + i - '0';
    }
    for (auto i : b)
    {
        if (i == '5')
            i = '6';
        sum2 = sum2 * 10 + i - '0';
    }
    sum = sum1 + sum2;
    return sum;
}

void solve()
{
    string a, b;
    cin >> a >> b;
    cout << number_min(a, b) << ' ' << number_max(a, b) << endl;
}

int main()
{
    solve();
}