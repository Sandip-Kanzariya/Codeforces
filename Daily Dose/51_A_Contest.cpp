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
// https://codeforces.com/problemset/problem/501/A

int main()
{
    int M, V, mt, vt;
    cin >> M >> V >> mt >> vt;

    int ms = max(3 * M / 10, M - M / 250 * mt);
    int vs = max(3 * V / 10, V - V / 250 * vt);

    if(ms > vs)
        cout << "Misha";
    else if(ms == vs)
        cout << "Tie";
    else
        cout << "Vasya";
        
    return 0;
}