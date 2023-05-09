#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <numeric>
#include <iomanip>

using namespace std;
const int N = 1e7;

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1829/C

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int temp = N, f = N, se = N;

        bool ff = false, sf = false;

        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;

            string s;
            cin >> s;

            if (s[0] == '1' && s[1] == '1')
            {
                temp = min(temp, m);
            }

            else if (s[0] == '1')
            {
                f = min(f, m);
                ff = true;
            }
            else if (s[1] == '1')
            {
                se = min(se, m);
                sf = true;
            }
        }

        // Take care of comapre minimum from two cases 
        if (temp == N || f + se < temp)
        {
            if(ff && sf)
                cout << f + se << "\n";
            else 
                cout << -1 << "\n";
        }

        else
        {
            cout << temp << "\n";
        }
    }

    return 0;
}
