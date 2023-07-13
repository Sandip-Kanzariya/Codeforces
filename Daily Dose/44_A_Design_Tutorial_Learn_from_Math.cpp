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
// https://codeforces.com/problemset/problem/472/A
int main()
{
    int t;
    cin >> t; // t > 12
    
    /*
        if t <= 11 then only 8 and 10 gives sum of two composite numbers
        8 = 4 + 4
        10 = 4 + 6
    */
   
    // number is odd
    if(t % 2 == 0){
        cout << 4 << " "<< t - 4;
    }
    else{
        cout << 9 << " "<< t - 9;
    }
    return 0;
}