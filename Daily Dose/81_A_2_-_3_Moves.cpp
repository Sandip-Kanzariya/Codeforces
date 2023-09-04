//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <iomanip>
using namespace std;

#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

// S@ndip
// https://codeforces.com/problemset/problem/1716/A
// Maths
int main()
{
    FIO

        int t;
    cin >> t;
    while (t--)
    {
        int x, ans3 = 0;
        cin >> x;

        if (x == 1)
        {
            cout << 2 << " ";
        }
        else
        {
            if (x % 3 == 0)
                ans3 = x / 3;
            else
            {
                ans3 = x / 3 + 1;
            }
            cout << ans3 << " ";
        }
    }
    return 0;
}