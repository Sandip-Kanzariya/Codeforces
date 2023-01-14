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

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1754/A
// Logical 

int main()
{
    FIO int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int q = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'Q') q++;
            else{
                if(q > 0)
                    q--;
            } 
        }
        // cout << q << "\n";
        if(q == 0)
            yes
        else no
    }
    return 0;
}