//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <iomanip>
#include <bitset>
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


pair <int, int> Count(string s){
    int cs = 0, cz = 0;
    for (int i = 0; i < s.size(); i++)
    {   
        if(s[i] == '1')
            cs++;
        else{
            cz++;
        }
    }
    return {cs, cz};
}
// S@ndip
// Logic Building + return pair
// https://codeforces.com/problemset/problem/1440/A
int main()
{
    FIO

    int t;
    cin >> t;
    while(t--){
        int n, c0, c1,h;
        cin >> n >> c0 >> c1 >> h;
        string s;
        cin >> s;
        pair <int, int> p = Count(s);   
        int cs = p.ST, cz = p.SC;

        int ans = cz * min(c0, c1 + h) + cs * min(c1, c0 + h);
        cout << ans << "\n";
    }
    return 0;
}