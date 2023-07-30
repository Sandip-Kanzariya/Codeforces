//#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

// https://codeforces.com/problemset/problem/140/A

#define PI 3.1415926535897 // acos(-1.0)
// S@ndip
int main()
{
    int n, R, r;
    cin >> n >> R >> r;

    if(n == 1)
    {
        if(R < r)
            cout << "NO";
        else
            cout << "YES";
    }

    else{
        if(R < 2 * r)
            cout << "NO";
        else{
            double d = (R - r) * sin(PI / n);
            if(d > r - 1e-9)
                cout << "YES" ;
            else 
                cout << "NO" ;
        }
    }
    return 0;
}