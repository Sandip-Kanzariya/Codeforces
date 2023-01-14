//#include <bits/stdc++.h>
#include <iostream>
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

#define yes cout << "YES\n";
#define no cout << "NO\n";

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/contest/987/problem/A

int main()
{
    FIO int t, n;
    cin >> t;
    n = t;
    map <char, string> mp;

    mp['p'] = "Power";
    mp['g'] = "Time";
    mp['b'] = "Space";
    mp['o'] = "Soul";
    mp['r'] = "Reality";
    mp['y'] = "Mind";

    while(t--){
        string s;
        cin >> s;

        for(auto d : mp){
            if(s[0] == d.first){
                mp[d.first] = "";
            }
        }
    }

    cout << 6 - n << "\n";
    for(auto k : mp)
        if(k.second != "")
            cout << k.second << "\n";
        // cout << k.first << " " << k.second << "\n";

    return 0;
}