#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;
using LLI = long long int;
const LLI N = 1e12 + 10;

#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1569/A
// STL : Substring

int main()
{
    FIO int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int f = s.size();
        for (int i = 0; i < s.size(); i++)
        {
            string new_ = s.substr(i, 2);
            if(new_ == "ab" || new_ == "ba"){
                cout << i + 1 << " " << i + 2 << "\n";
                break;
            }
            f--;
        }
        
        if(!f){
            cout << -1 << " " << -1 << "\n";
        }
    }
    return 0;
}