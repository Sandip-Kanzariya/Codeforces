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
// https://codeforces.com/problemset/problem/271/A
// Logic


int main()
{
    int y ;
    cin >> y;

    
    while(true){
        y += 1;
        int a = y / 1000; // Give First Digit
        int b = y / 100 % 10; // Give Second Digit
        int c = y / 10 % 10; // Give Third Digit
        int d = y % 10;  //Give last Digit

        if(a != b && b != c && c != d && d !=a && a != c && b != d){
            cout << y;
            return 0;
        }
    }
    return 0;
}