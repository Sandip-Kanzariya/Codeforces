#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;
using LLI = long long int;
const LLI N = 1e12 + 10;

#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1579/A

int main() {
    FIO

    int t;
    cin >> t;
    while(t--){
        string s ;
        cin >> s;

        int count[3] = {0};

        for(char c : s) ++count[c - 'A'];

        cout << (count[0] + count[2] == count[1] ? "YES\n" : "NO\n");
    }
    
    return 0;
}