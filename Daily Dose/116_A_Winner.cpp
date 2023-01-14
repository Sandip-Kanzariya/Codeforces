#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;
using LLI = long long int;
const LLI N = 1e12 + 10;

#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/2/A
// map + hashtable

// Wrong Code
int main()
{
    FIO LLI n;
    cin >> n;

    map<string, LLI> mp;

    string s[10000];
    LLI v[10000];
    for (LLI i = 0; i < n; i++)
    {
        cin >> s[i] >> v[i];
        mp[s[i]] += v[i];
        // mp[s]
    }

    LLI max_ = 0;
    // for (auto k : mp)
    // {
    //     // cout << k.first << " " << k.second << "\n";
    //     max_ = max(k.second, max_);
    // }

    for (LLI i = 0; i < n; i++)
    {
        max_ = max(max_, mp[s[i]]);
    }
    
    // cout << max_ << "\n";

    map<string, LLI> extra;

    for (LLI i = 0; i < n; i++)
    {
        extra[s[i]] += v[i];
        if (extra[s[i]] == max_ && extra[s[i]] >= max_)
        {
            cout << s[i] << "\n";
            break;
        }
    }

    return 0;
}