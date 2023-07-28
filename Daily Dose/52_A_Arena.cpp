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
// S@ndip 
// https://codeforces.com/problemset/problem/1487/A


int main()
{
    int t, n, p, count;
    cin >> t;
    while(t--){
        cin >> n;
        vector <int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> p;
            v.push_back(p);
        }
        count = 0;
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if(v[i] > v[0])
                count++;
        }
        cout << count << "\n";
    }
    return 0;
}