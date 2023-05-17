//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <cmath>
using namespace std;
const int N = 1e5 + 10;

using LLI  = long long int;

#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

// Distributive properties
// https://codeforces.com/problemset/problem/1110/A
// S@ndip : Shree Ganeshay Namah

int main()
{
    FIO

    LLI b,k;
    cin >> b >> k;
    vector <LLI> num(k, 0);
    for(LLI i = 0;i < k;++i){
        cin >> num[i];
    }

    LLI sum = 0, p = 1;
    for (LLI i = k - 1; i >= 0; i--)
    {
        sum = (sum + num[i] * p) % 2;                     
        p = (p * b) % 2;
    }
    
    if(sum == 0){
        cout << "even";
    }
    else{
        cout << "odd";   
    }

    return 0;
}