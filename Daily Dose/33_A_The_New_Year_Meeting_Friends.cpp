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
// https://codeforces.com/problemset/problem/723/A

int main()
{
    int a[3];
    for_loop(i, 3){
        cin >> a[i];
    }
    sort(a, a + 3);
    // cout << min(a[1] - a[0] + a[2] - a[0], a[1] - a[0] + a[2] - a[1] < a[2] - a[0] + a[2] - a[1] ? a[1] - a[0] + a[2] - a[1]:a[2] - a[0] + a[2] - a[1]);

    cout << a[2] - a[1] + a[1] - a[0]; 
      
     return 0;
}