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
// https://codeforces.com/problemset/problem/581/A

int main()
{
    int a, b;
    cin >> a >> b;
    // int small = a < b ? a : b;
    cout <<  (a < b ? a : b) << " " << (a + b -  2 *  (a < b ? a : b)) / 2;
    return 0;
}