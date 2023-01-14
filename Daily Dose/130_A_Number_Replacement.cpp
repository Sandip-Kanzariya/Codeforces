//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <iomanip>
using namespace std;
const int N = 1e5 + 10;

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
// https://codeforces.com/contest/1744/problem/A

// Fearless 
int main()
{
    FIO

        int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vi v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        string s;
        cin >> s;

        vector<char> ans(n, ' ');
        vector<bool> flag(n, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (v[j] == v[i] && flag[j] != 1){
                    ans[j] = s[i];
                    flag[j] = 1;
                }
            }
        }
        
        string check = "";
        for (auto h : ans)
            check += h;

        // cout << check << " ";
        if(check == s) yes
        else no
        
}
return 0;
}