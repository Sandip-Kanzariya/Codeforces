#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
#include <iomanip>
using namespace std;
const int N = 1e5 + 10;

#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1742/A
// map

int main()
{
    FIO

    int t;
    cin >> t;
    while(t--){
        vector <int> v;
        for (int i = 0; i < 3; i++)
        {
            int t;
            cin >> t;
            v.push_back(t);
        }
        
        map <int, int> mp;
        mp[v[0]] = v[1] + v[2];
        mp[v[1]] = v[0] + v[2];
        mp[v[2]] = v[1] + v[0];

        bool flage = 0;
        for(auto k : mp){
            // cout << k.first << " " << k.second << "\n";
            if(k.first == k.second)
            {
                flage = 1;
            }
        }

        if(flage)
            cout << "YES\n";
        else
            cout << "No\n";
    }
    return 0;
}