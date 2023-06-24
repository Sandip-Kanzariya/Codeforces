//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

#define for_loop(i,n) for(int i = 0;i < n;i++)
#define pb push_back
// S@ndip

// https://codeforces.com/problemset/problem/443/A

int main()
{
    unordered_set <char> d;
    string s;
    getline(cin, s);
    // cout << s;

    for_loop(i, s.size()){
        if(isalpha(s[i]))
            d.insert(s[i]);
    }

    // unordered_set <char> :: iterator it = d.begin();
    // for ( ; it != d.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    
    cout << d.size();
    
        
    return 0;
}