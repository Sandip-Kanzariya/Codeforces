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
// https://codeforces.com/problemset/problem/598/A
// Logic 

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        LLI n;
        cin >> n;

        LLI sum = n * (n + 1) / 2;
        LLI a = 1;
        while(a <= n){
            sum -= 2 * a;
            a *= 2;
        }  
        cout << sum << "\n";
    }
    
    return 0;
}
