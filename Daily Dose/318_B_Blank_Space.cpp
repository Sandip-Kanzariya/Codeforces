#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <numeric>
#include <iomanip>

using namespace std;
const int N = 1e7;

// https://codeforces.com/problemset/problem/1829/B
// S@ndip : Shree Ganeshay Namah

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int ans = 0;
        int mx = 0;
        vector<int> v(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            if (v[i] == 0)
            {
                ans++;
                mx = max(mx, ans);
            }
            else
            {
                ans = 0;
            }
        }

        cout << mx << "\n";
    }

    return 0;
}

