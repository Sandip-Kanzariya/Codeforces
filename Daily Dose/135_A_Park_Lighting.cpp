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

#define yes cout << "YES\n";
#define no cout << "NO\n";

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1358/A
// Pure Logic 

int main()
{
    FIO
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        if(m % 2 == 0){
            cout << (m / 2) * n << "\n";
        }
        else{
            cout << ((m - 1) / 2)  * n + (n + 1) / 2  << "\n";
        }
    }
    return 0;
}