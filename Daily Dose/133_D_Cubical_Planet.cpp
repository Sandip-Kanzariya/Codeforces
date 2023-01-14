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
// https://codeforces.com/problemset/problem/39/D

// Geometry in Cube :

int main()
{
    FIO

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    bool ans = pow(a - d, 2) + pow(b - e, 2) + pow(c - f, 2) < 3;
    if(ans) yes
    else no
    
        return 0;
}