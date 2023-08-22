//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <iomanip>
using namespace std;

using I = int;
using SI = short int;
using LI = long int;
using LLI = long long int;
using UI = unsigned int;
using USI = unsigned short int;
using ULI = unsigned long int;
using ULLI = unsigned long long int;

#define FOR(i, s, e) for (int i = s; i < e; ++i)
#define FORR(i, s, e) for (int i = s; i >= e; --i)
#define ST first
#define SC second
#define pb push_back
#define pob pop_back
#define mp make_pair
#define PRE cout << fixed << setprecision(10);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

// S@ndip
// https://codeforces.com/problemset/problem/96/A
// Don't Forget basic logic
int main()
{
    string s;
    cin >> s;

    int count = 0;
    for(int i = 0;i < s.size() - 1;i++){
        if(s[i] == s[i + 1]){
            count++;

            if(count == 6){
                // break;
                cout << "YES";
                return 0;
            }
        }
        else{
            count = 0;
        }
    }
    cout << "NO";
    return 0;
}