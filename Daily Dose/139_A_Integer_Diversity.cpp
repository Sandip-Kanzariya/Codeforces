// #include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;
const int N = 1e5 + 10;

using LLI = long long int;

#define vi vector<int>
#define pi pair<int, int>
#define umap unordered_map
#define uset unordered_set

#define all(a) a.begin(), a.end()
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define yes cout << "Yes\n";
#define no cout << "No\n";

// https://codeforces.com/problemset/problem/1616/A
// Logic + Think some test cases

int main()
{
    FIO int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; ++i)
        {
            int temp;
            cin >> temp;
            if (temp >= 0)
                mp[temp]++;
            else
                mp[temp * (-1)]++;
        }

        int ans = 0;

        for (auto k : mp)
        {

            if (k.first == 0)
                ans++;
            else
            {
                if (k.second == 1)
                    ans++;
                else if (k.second > 1 && k.first != 0)
                    ans += 2;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}