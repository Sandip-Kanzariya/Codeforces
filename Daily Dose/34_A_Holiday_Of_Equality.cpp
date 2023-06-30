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
// https://codeforces.com/problemset/problem/758/A

int main()
{
    int t, temp;
    cin >> t;
    vector <int> v;
    while(t--){
        cin >> temp;
        v.pb(temp);   
    }
    sort(v.begin(), v.end());
    temp = 0;
    for_loop(i, v.size() - 1){
        if(v[i] < v[v.size() - 1]) // 
            temp += v[v.size() - 1] - v[i];
    }
    cout << temp;
    return 0;
}