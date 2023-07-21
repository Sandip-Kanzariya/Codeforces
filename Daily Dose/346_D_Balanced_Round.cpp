#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1850/problem/D

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >>  n >> k;

        vector<int> v(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        

        sort(v.begin(), v.end());

        int ans = 1;
        int c = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if((v[i + 1] - v[i]) <= k){
                c++;
            }
            else{
                c = 1;
            }

            ans = max(ans, c);
        }
        
        cout << n - ans << "\n";
    }

    return 0;
}