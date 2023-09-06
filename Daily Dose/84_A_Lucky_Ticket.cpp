// //#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <unordered_set>
// using namespace std;

// #define for_loop(i,n) for(int i = 0;i < n;i++)
// #define pb push_back
// #define mp make_pair
// // S@ndip
// int main()
// {
//     int t;
//     cin >> t;

//     if(t % 2 != 0){
//         cout << "NO";
//         return -1;
//     }
//     int n;
//     cin >> n;
//     int copy = n;
//     int rem;
//     int ans = 0;
//     while(n != 0){
//         rem = n % 10;
//         ans += rem;
//         n = n / 10;
//     }
//     // cout << i << "\n";
//     n = copy;
//     int half = 0;

//     // bool flag = false;
//     for (int j = 0; j < t / 2; j++)
//     {
//         rem = n % 10;
//         half += rem;
//         n = n / 10;
//     }

//     // cout << half << "\n";
//     if(half == ans - half && (copy % 10 == 4 || copy % 10 == 7)){
//         cout << "YES" ;
//     }

//     else
//         cout << "NO";
//     // cout << ans << "\n";

//     return 0;
// }

//#include <bits/stdc++.h>
#include <iostream>

using namespace std;
const int N = 1e5 + 10;

#define FOR(i, s, e) for (int i = s; i < e; ++i)
#define FORR(i, s, e) for (int i = s; i >= e; --i)
#define ST first
#define SC second
#define pb push_back
#define pob pop_back
#define mp make_pair
#define PRE cout << fixed << setprecision(10);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

// https://codeforces.com/problemset/problem/146/A

// Similar to https://codeforces.com/contest/110/problem/A

// S@ndip
int main()
{
    FIO

        int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0, r = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] != '4' && s[i] != '7')
        {
            cout << "NO";
            return 0;
        }
        else
        {
            if (i < n / 2)
                l += s[i] - '0';
            else
                r += s[i] - '0';
        }
    }
    if (l == r)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}