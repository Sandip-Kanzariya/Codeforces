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
// https://codeforces.com/problemset/problem/66/A
// https://github.com/mohandsakr
// Java is the Best

int main()
{
    FIO
    long double n;
    cin >> n;

    if(n <= 127)
        cout << "byte\n";
    else if(n <= 32767)
        cout << "short\n";
    else if(n <= 2147483647)
        cout << "int\n";
    else if(n <= 9223372036854775807)
        cout << "long\n";
    else 
        cout << "BigInteger\n";
    
    return 0;
}