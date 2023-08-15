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


#define FOR(i, s, e) for (int i = s ; i < e ; ++i)
#define FORR(i, s, e) for (int i = s; i >= e; --i)
#define ST first
#define SC second
#define pb push_back
#define pob pop_back
#define mp make_pair
#define PRE  cout << fixed << setprecision(10);
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// S@ndip
// https://codeforces.com/problemset/problem/318/A
int main()
{
    FIO
    LLI n, k;
    cin >> n >> k;

    // For Odd part
    if(k <= (n + 1)/ 2){
        cout << k * 2 - 1;
    }
    else{
        cout << (k - (n + 1) / 2) * 2;
    }
    
    vector <LLI> v;

    LLI c = 0;
    for(LLI i = 1;i <= n;){
        // cout << i << "\n";
        v.push_back(i);
        c++;
        i = 2 * c + 1;
    }

    for (LLI i = 2; i <= n; i += 2)
    {
        // cout << i << " ";
        v.push_back(i);
    }

    for(auto i : v){
        cout << i<< " ";
    }
    
    cout << v[k - 1];



    return 0;
}