#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1850/problem/A

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int a, b, c;
        cin >> a >> b >> c;


        if (a + b >= 10 || a + c >= 10 || c + b >= 10)
        {
            cout << "YES\n";
        }
        else 
            cout << "NO\n";
    }

    return 0;
}