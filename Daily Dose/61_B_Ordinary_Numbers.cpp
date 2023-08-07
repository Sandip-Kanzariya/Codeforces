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


#define FOR(i, s, e) for (int i = s ; i <= e ; ++i)
#define FORR(i, s, e) for (int i = s; i >= e;)
#define ST first
#define SC second
#define pb push_back
#define pob pop_back
#define mp make_pair
#define PRE  cout << fixed << setprecision(10);
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// S@ndip

// https://codeforces.com/problemset/problem/1520/B

int main()
{
    LLI t, n, ans;
    cin >> t;
    while(t--){
        cin >> n;
        ans = 0;
        for(LLI i = 1;i <= 9;i++){
            for(LLI j = i;j <= n;){
                ans++;
                j = (j * 10) + i;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}