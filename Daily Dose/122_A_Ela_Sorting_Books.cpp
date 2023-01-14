#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <iomanip>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int f[30];
// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1737/A
// Remaining

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(f, 0, sizeof f);
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        int x = n / k;
        for (int i = 0; i < n; i++)
        {
            f[s[i] - 'a']++;
        }

        for (int i = 1; i <= k; i++)
        {
            int cnt = 0;
            int j = 0;
            int u = -1;
            while (cnt < x)
            {
                if (!f[j])
                {
                    u = j;
                    break;
                }
                j++;
                cnt++;
            }
            for(int i = 0; i < j; i++) f[i]--;
            if (u == -1)
                u = j;
            printf("%c", u + 'a');
        }
        puts("");
    }
}