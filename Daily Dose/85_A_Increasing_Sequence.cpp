//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <iomanip>
using namespace std;
const int N = 1e5+10;

#define all(a) a.begin(), a.end()
#define FOR(i, s, e) for (int i = s ; i < e ; ++i)
#define FORR(i, s, e) for (int i = s; i >= e; --i)
#define ST first
#define pb push_back
#define SC second
#define pob pop_back
#define mp make_pair
#define PRE  cout << fixed << setprecision(10);
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// S@ndip
// https://codeforces.com/problemset/problem/11/A
// 
int main()
{
    int n, d;
    cin >> n >> d;
    vector <int> a;
    int b0;
    cin >> b0;
    int moves = 0;
    for(int i = 1;i < n;++i){
        int t;
        cin >> t;
        if (t <= b0)
        {
            int x = (b0 - t) / d + 1;
            moves += x;
            b0 = t + x * d;
        }
        else
        {
            b0 = t;
        }
    }
    
    cout << moves;

    return 0;
}