//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
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
// https://codeforces.com/problemset/problem/27/A

// set to vector => vector <int> v(s.begin(), s.end());
// Vector addressing 

int main()
{
    FIO

        int n;
    cin >> n;

    vector<int> v(3002);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x]++;
    }

    for (int i = 1; i < v.size(); i++)
    {
        if(v[i] == 0)
        {
            cout << i << "\n";
            break;
        }
    }
    
    return 0;
}