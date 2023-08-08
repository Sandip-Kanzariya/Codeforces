//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <bitset>
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
int main()
{
    FIO

        LLI a,
        b, ans = 0, X = 2;
    cin >> a >> b;

    FOR(i, 2, 61)
    {
        LLI y = 1;
        X = X << 1;
        FOR(j, 0, i - 1)
        {
            LLI z = (X - 1) ^ (y << j);
            if(z <= b && z >= a)
                ans++;
        }
    }

    cout << ans;
    return 0;
}