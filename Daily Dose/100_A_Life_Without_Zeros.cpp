//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

using LLI = unsigned long long;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// https://codeforces.com/problemset/problem/75/A
// S@ndip : Shree Ganeshay Namah
int main()
{
    FIO
    LLI a, b;
    cin >> a >> b;
    LLI sum = a + b;

    string x = to_string(a);
    string y = to_string(b);
    string s = to_string(sum);

    string a1 = "", b1 = "", s1 = "";
    for(LLI i = 0;i < x.size();++i){
        if(x[i] != '0')
            a1 += x[i];
    }

    for(LLI i = 0;i < y.size();++i){
        if(y[i] != '0')
            b1 += y[i];
    }
    
    for(LLI i = 0;i < s.size();++i){
        if(s[i] != '0')
            s1 += s[i];
    }

    LLI a2 = stoull(a1);
    LLI b2 = stoull(b1);
    LLI sum2 = stoull(s1);
    
    // cout << sum1 << " " << a1 + b1 << " ";
    if(sum2 == a2 + b2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}