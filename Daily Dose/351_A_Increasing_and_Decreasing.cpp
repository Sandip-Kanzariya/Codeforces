
#include <bits/stdc++.h>
using namespace std;

int c = 1e9 + 7;

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1864/A

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;

        if (a >= b)
        {
            cout << -1 << "\n";
            continue;
        }

        vector<int> v(n);
        int j = 1;
        for (int i = n - 1; i >= 0; i--)
        {

            v[i] = b;
            b -= j;
            j++;
        }

        v[0] = a;

        // This Condition is most IMP
        if (v[1] - v[0] <= v[2] - v[1])
        {

            cout << -1 << "\n";
        }
        else
        {

            for (auto k : v)
            {
                cout << k << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
