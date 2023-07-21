
#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1850/problem/C
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char x;
        string s;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
               cin >> x;

               if(x != '.') s += x; 
            }
            
        }
        cout << s << "\n";
    }

    return 0;
}