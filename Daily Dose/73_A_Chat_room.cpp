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
// https://codeforces.com/problemset/problem/58/A
// Don't Forget Basic idea

int main()
{
    string s;
    cin >> s;
    string k = "hello";
    int j = 0, c = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == k[j]){
            j++;
            c++;
            if(c == 5){
                break;
            }
        }
    }
    if(c == 5){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    



    // int h = s.find("h");
    // // cout << h << " ";
    // int e = s.find("e");
    // // cout << e << " ";
    // int l1 = s.find("l");
    // // cout << l1 << " ";
    // s.insert(l1, " ");
    // // cout << s << " ";
    // int l2 = s.find("l");
    // // cout << l2 << " ";
    // int o = s.find("o");
    // // cout << o << " ";

    // if(h < e){
    //     if(e < l1){
    //         if(l1 < l2){
    //             if(l2 < o){
    //                 cout << "YES";
    //             }
    //             else{
    //                 cout << "NO";
    //             }
    //         }
    //         else{
    //             cout << "NO";
    //         }
    //     }
    //     else{
    //         cout << "NO";
    //     }
    // }
    // else{
    //     cout << "NO";
    // }
        
    return 0;
}