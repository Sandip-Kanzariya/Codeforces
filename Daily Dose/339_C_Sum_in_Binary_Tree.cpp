#include <bits/stdc++.h>

using namespace std;

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1843/C

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        long long n;
        cin >> n;

        long long ans = 0;

        while (n != 1)
        {
            ans += n;
            n = n / 2;
        }
        cout << ans + 1 << "\n";
    }

    return 0;
}