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
// https://codeforces.com/problemset/problem/1065/B
// https://www.geeksforgeeks.org/maximum-and-minimum-isolated-vertices-in-a-graph/
// Maximum edges in graph with n vertices = n * (n - 1) / 2
// Maximum & Minimum isolated vertices  
// Edge case : When #edges = 0

int main()
{
    FIO 
    LLI n, m;
    cin >> n >> m;


    // Minimum isolated vertices : 
    if(n <= 2 * m)
        cout << 0 << " ";
    else
        cout << n - 2 * m << " ";


    // Maximum isolated vertices : 

    // Create polygon with i vertices 
    LLI i = 0;
    // Handle Edge case when edges = 0
    if(m == 0)
        cout << n - i;
    else{
        for(i = 1;i <= n;++i){
            if(i * (i - 1) / 2 >= m){
                break;
            }
        }
        cout << n - i;
    }
    

    return 0;
}