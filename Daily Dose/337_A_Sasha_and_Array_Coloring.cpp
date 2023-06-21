
#include <bits/stdc++.h>
using namespace std;

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1843/A

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int ans = 0;
        for (int i = 0; i < n / 2; i++)
        {
            ans += v[n - i - 1] - v[i];
        }
        cout << ans << "\n";
    }
    return 0;
}
