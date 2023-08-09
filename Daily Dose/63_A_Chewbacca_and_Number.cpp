//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// S@ndip


// How to deal with string of numbers 
// https://codeforces.com/problemset/problem/514/A

int main()
{
    FIO
    string s;
    cin >> s;
    int f = s[0] - '0';
    if(f == 9){
        s[0] = '9';
    }
    else{
        if(f > 4)
            s[0] = (9 - f) + '0';
    }


    for (int i = 1; i < s.size(); i++)
    {
        int a = s[i] - '0';

        if(a < 5 || a == 0){
            continue;
        }
        else{
            s[i] = (9 - a) + '0';
        }
    }
    
    cout << s;
    return 0;
}