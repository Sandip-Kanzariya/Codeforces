//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;



#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

template <typename F, typename S>
void Print_Map(map <F, S> m){
    for(auto &i : m){
        cout << i.first << " " << i.second << "\n";
    }
    cout << "\n";
}
// https://codeforces.com/problemset/problem/37/A

// S@ndip
// use of map and sort second elements of map

int main()
{
    FIO
    int n;
    cin >> n;
    int bars[n];
    map <int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        cin >> bars[i];
        mp[bars[i]]++;
    }
    
    auto it = mp.begin();
    vector <int> v;
    for(it; it != mp.end();it++){
        v.push_back((*it).second);
    }
    sort(v.rbegin(), v.rend());

    cout << v[0] << " " << mp.size();
    
    return 0;
}