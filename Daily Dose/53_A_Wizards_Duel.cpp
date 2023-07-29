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
// https://codeforces.com/problemset/problem/591/A
int main()
{

    int l, p, q;
    cin >> l >> p >> q;

    double relative_time = (double)l / (p + q); 

    cout << relative_time * p ;
    return 0;
}