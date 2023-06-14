#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1841/A

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if(n >= 5) cout << "Alice\n";
        else cout << "Bob\n";
    }
    return 0;
}
