//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

// link : https://codeforces.com/problemset/problem/1220/A

// S@ndip
int main()
{
    
    int t, n = 0, z = 0;   

    cin >> t;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'z')
            z++;
        else if (s[i] == 'n')
            n++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << 1 <<  " ";
    }    

    for (int i = 0; i < z; i++)
    {
        cout << 0 <<  " ";
    }    
    
    return 0;
}