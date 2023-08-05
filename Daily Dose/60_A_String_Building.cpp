
//#include <bits/stdc++.h>
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
int main()
{
    int t;
    cin >> t;
    string s;

    while (t--)
    {
        cin >> s;
        int flag = 1;
        for (int i = 0; i < s.size(); i++)
        {
            int cnt = 1;
            while (s[i] == s[i + 1] && i + 1 < s.size())
            {
                cnt++;
                i++;
            }
            if (cnt < 2)
            {
                flag = 0;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}