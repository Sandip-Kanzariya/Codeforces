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
// https://codeforces.com/problemset/problem/1355/A

int main()
{
    FIO
    int t;
    cin >> t;
    while(t--){
        LLI a, k;
        cin >> a >> k;

        // a(n + 1) => an + minDigit(an) * maxDigit(an)
        bool flag = 0;
        while(--k){
            LLI maxi = a % 10;
            LLI mini = a % 10;
            LLI x = a;
            while(x){
                LLI last = x % 10;
                if(last < mini)
                    mini = last;
                if(last > maxi)
                    maxi = last;
                
                x = x / 10;
            }

            if(maxi == 0 || mini == 0){
                cout << a << "\n";
                flag = 1;
                break;
            }
            a = a + (maxi * mini);
        }
        if(!flag)
        cout << a << "\n";
    }
    return 0;
}