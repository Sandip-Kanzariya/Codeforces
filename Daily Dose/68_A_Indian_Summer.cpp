//#include <bits/stdc++.h>
#include <iostream>
#include <map>

#include <string>
#include <algorithm>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// S@ndip

// Map with pair
// https://codeforces.com/problemset/problem/44/A

template <typename F, typename S>
void Print_Map(map <F, S> m){
    for(auto &i : m){
        cout << i.first.first << i.first.second << " " << i.second << "\n";
    }
    cout << "\n";
}
int main()
{
    FIO
    int n;
    cin >> n;
    string tree, leaves;
    map <pair<string, string>, int> mp;
    while(n--){
        cin >> tree >> leaves;
        mp[{tree, leaves}]++;
    }
    // Print_Map(mp);
    cout << mp.size();
    return 0;
}