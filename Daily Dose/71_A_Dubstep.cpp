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
// https://codeforces.com/problemset/problem/208/A

// String operation + logic 
int main()
{
    string s;
    cin >> s;

    // string se = "WUB";
    // cout << se.size();

    while(s.find("WUB") != -1){
        int n = s.find("WUB");
        s.erase(n, 3);
        if(n != 0 && n != s.size() - 3){
                s.insert(n, " ");
        }
        // cout << n << " ";
    }

    // Master Logic !
    while (s.find("  ") != -1)
    {
        int t = s.find("  ");
        s.erase(t, 2);
        s.insert(t, " ");
    }
    
    cout << s << " ";
    return 0;
}