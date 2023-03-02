//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <cmath>
using namespace std;
using LLI = long long int;
const LLI N = 1e12 + 10;

#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1739/A

int main()
{
    FIO int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        if(max(n, m) == 3){
            if(min(n, m) == 1){
                cout << 1 << " " << 1 << "\n";
            }
            else{
                cout << 2 << " " << 2 << "\n";
            }
        }
        else{
            cout << 1 << " " << 1 << "\n";
        }
    }

    return 0;
}