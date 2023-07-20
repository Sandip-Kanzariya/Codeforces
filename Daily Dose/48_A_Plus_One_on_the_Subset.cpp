//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

#define for_loop(i,n) for(int i = 0;i < n;i++)
#define pb push_back
#define mp make_pair

// https://codeforces.com/problemset/problem/1624/A

// S@ndip
int main()
{
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n;  
    vector <int> v(0);
        for (int i = 0; i < n; i++)
        {   cin >> x;
            v.pb(x);
        }
        
        sort(v.begin(), v.end());
        
        cout << v[n - 1] - v[0] << "\n";
    }
    return 0;
}