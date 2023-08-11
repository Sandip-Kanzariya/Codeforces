//#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// S@ndip

// use of map / unordered_map
// https://codeforces.com/contest/43/problem/A

int main()
{
    int n;
    cin >> n;
    string s;
    unordered_map<string, int> mp;
    while (n--)
    {
        cin >> s;
        mp[s]++;
    }

    vector <int> v;
    for (auto i : mp)
    {
        // cout << i.first << " " << i.second << "\n";
        v.push_back(i.second);
    }

    sort(v.rbegin(), v.rend());
    for (auto i : mp)
    {
        if(i.second == v[0])
            cout << i.first;
    }

    
    return 0;
}