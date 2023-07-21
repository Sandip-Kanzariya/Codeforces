#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1850/problem/B

int cmpv(pair<int, pair <int, int>> a, pair<int, pair <int, int>> b)
{
    return a.second.second > b.second.second;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        vector <pair<int, pair <int, int>>> v;
        

        for (int i = 1; i <= n; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back({i, {a, b}});
        }

        sort(v.begin(), v.end(), cmpv);      

        int ans = v[n - 1].first;
        int bm = v[n - 1].second.second;
        for (int i = 1; i <= n; i++)
        {
            if(v[i - 1].second.first <= 10 && bm < v[i - 1].second.second){
                bm = v[i - 1].second.second;
                ans = v[i - 1].first;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}