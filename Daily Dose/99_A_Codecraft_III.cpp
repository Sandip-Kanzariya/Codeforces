//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
const int N = 1e5+10;

using LLI = long long int;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/45/A

int main()
{
    FIO
    string s;
    cin >> s;
    int n;
    cin >> n;

    vector <string> month = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    for(int i = 0;i < 12;++i){
        if(month[i] == s)
        {
            cout << month[(i + n % 12) % 12] << " ";
            // cout << (i + n % 12) % 12 << " ";
        }
    }
    return 0;
}