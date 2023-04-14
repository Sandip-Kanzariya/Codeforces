// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;


#define for_loop(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define mp make_pair

// S@ndip
// https://codeforces.com/problemset/problem/448/A
int main()
{
    int a1, a2, a3;
    int b1, b2, b3;

    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;

    int n;
    cin >> n;

    int a = a1 + a2 + a3;
    int b = b1 + b2 + b3;

    int ac = a % 5 ? a / 5 + 1 : a / 5;
    int bc = b % 10 ? b / 10 + 1 : b / 10;

    if (ac + bc <= n)
        cout << "YES\n";
    else 
        cout << "NO\n";

            return 0;
}