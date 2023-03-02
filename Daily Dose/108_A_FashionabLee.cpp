//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <set>
using namespace std;
using LLI = long long int;
const int N = 1e5 + 10;
using LLI = long long;

#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1369/A

// Polygon  : if number of side is mutliple of 4 than it's edge's parallel to X-axis and Y-axis same time

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if(n % 4 == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    
    return 0;
}
