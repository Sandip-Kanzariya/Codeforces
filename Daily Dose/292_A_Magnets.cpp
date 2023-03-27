// #include <bits/stdc++.h>
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
// https://codeforces.com/problemset/problem/344/A

int main()
{
    int n;
    cin >> n;
    string temp, pre;
    int ans = 1;
    cin >> pre;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> temp;
        if (temp != pre)
        {
            ans++;
            pre = temp;
        }
    }

    return 0;
}