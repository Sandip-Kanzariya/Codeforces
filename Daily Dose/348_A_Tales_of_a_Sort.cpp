#include <bits/stdc++.h>
using namespace std;
// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/contest/1856/problem/A

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (is_sorted(a.begin(), a.end()))
        {
            cout << 0 << "\n";
        }
        else
        {
            int ans = INT_MIN;

            for (int i = 1; i < n; i++)
            {
                if(a[i] < a[i - 1]){
                    ans = max(a[i - 1], ans);
                }
            }
            
            cout << ans << "\n";
        }
    }
    return 0;
}
