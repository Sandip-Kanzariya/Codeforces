// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <map>
using namespace std;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int cmpvalue(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/52/A

int main()
{
    FIO

    int n;
    cin >> n;
    
    map <int, int> mp;
    
    for(int i = 0;i < n;++i){
        int t;
        cin >> t;
        mp[t]++;
    }

    // Convert map into vector 
    vector <pair<int, int>> v(mp.begin(), mp.end());

    sort(v.begin(), v.end(), cmpvalue);

    int ans = 0;
    for(int i = 1;i < mp.size();++i){
        // cout << v[i].first << " " << v[i].second << "\n";
        ans += v[i].second;
    }

    cout << ans;
    return 0;
}