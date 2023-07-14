//#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

// S@ndip
// https://codeforces.com/problemset/problem/47/A
int main()
{
    int x;
    cin >> x;

    if(sqrt(8 * x + 1) == int(sqrt(8 * x + 1))) 
        cout << "YES";
    else
    cout << "NO";
    return 0;
}