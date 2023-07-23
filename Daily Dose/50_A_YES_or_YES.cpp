//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

// https://codeforces.com/problemset/problem/1703/A
// S@ndip
int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ptr_fun<int, int>(toupper));
        if(s == "YES")
            cout << "YES" << "\n";
        else 
            cout << "NO" << "\n";
    }
    return 0;
}