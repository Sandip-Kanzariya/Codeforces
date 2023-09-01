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
int gcd(int a, int b){
    
    if(a == 0)
        return b;

    return gcd(b % a, a);
}
int main()
{
    FIO
    int a, b, k;
    cin >> a >> b >> k;
    while(k > 0){
        int s = gcd(a, k);
        k = k - s;
        if(k <= 0){
           cout << "0"; // s
           return 0;
        }

        int as = gcd(b, k);
        k = k - as;
        if(k <= 0){
           cout << "1"; // s
           return 0;    
        }
    }
    
    return 0;
}