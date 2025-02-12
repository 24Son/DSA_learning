#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        int logic = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                logic = 1;
            }
        }
        if (logic == 0)
            break;
        cout << "Buoc " << i + 1 << ": ";
        for (int h = 0; h < n; h++)
            cout << v[h] << ' ';
        cout << endl;
    }
}

int main()
{
    solve();
}