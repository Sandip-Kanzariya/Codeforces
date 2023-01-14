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
// https://codeforces.com/contest/987/problem/B
// https://qr.ae/pvxtPc

int main()
{
    FIO 
    int x, y;
    cin >> x >> y;
    
    // 
    double xy = x * log(y), yx = y * log(x);

    // cout << exp(xy) << " " <<  exp(yx);
    const long double epsilon = 1e-8;

    if(abs(xy - yx) <= epsilon)
        cout << '=';
    else if(yx > xy)
        cout << '>';
    else 
        cout << '<';

    return 0;
}