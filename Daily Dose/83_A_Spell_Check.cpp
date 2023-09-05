//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <cctype>
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

bool isvalid(string s){
    for(int i = 1;i < s.size();++i){
        if(!islower(s[i])) return false;
    }
    return 1;
}
int main()
{
    FIO

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        // cout << s << "\n";
        if(n == 5){
            if(s == "Timru"){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}