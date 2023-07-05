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
int main()
{
    int t;
    cin >> t; // 2
    int l,  c = 0;
    for (int i = 1; i <= t; i++)
    {   
        l = i;
        if( (t - l) % l == 0 && ((t - l) != 0)){
            c++;
        }
    }

    cout << c;
    
    return 0;
}