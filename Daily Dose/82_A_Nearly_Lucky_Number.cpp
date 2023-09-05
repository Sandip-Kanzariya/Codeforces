//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <iomanip>
using namespace std;
const int N = 1e5+10;

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
// https://codeforces.com/contest/110/problem/A
int main()
{
    FIO

    LLI n;
    cin >> n;

    int count = 0;
    while(n){
        if(n % 10 == 4 || n % 10 == 7){
            count++;
        }
        n = n / 10;
    }

    if(count == 4 || count == 7){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}