// //#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <unordered_set>
// using namespace std;

// #define for_loop(i, n) for (int i = 0; i < n; i++)
// #define pb push_back
// #define mp make_pair
// // S@ndip

// // https://codeforces.com/contest/16/problem/A
// bool check(string s)
// {
//     unordered_set<char> un;

//     for (int i = 0; i < s.size(); i++)
//     {
//         un.insert(s[i]);
//     }
//     if (un.size() != 1)
//         return false;
//     else
//         return true;
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;

//     vector<string> v;
//     vector<char> f;
//     string s;
//     bool flag = true;
//     while (n--)
//     {
//         cin >> s;
//         f.push_back(s[0]);

//         if (check(s))
//             v.push_back(s);
//         else
//         {
//             flag = false;
//             break;
//         }
//     }

//     unordered_set<char> un;

//     for (int i = 0; i < f.size(); i++)
//     {
//         un.insert(f[i]);
//     }

//     if (flag)
//     {
//         if(un.size() == f.size())
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
//     else
//         cout << "NO" << endl;

//     return 0;
// }

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

// https://codeforces.com/contest/16/problem/A
int main()
{
    int n;
    long long d;
    cin >> n >> d;
    vector <long long> v;
    int t = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
    }

    int j = 0, c = 0, i = 0;
    while (j < n)
    {
        j = i + 1;
        if (v[j] == v[i])
        {
            v[j] += d;
            c++;
        }
        else if(v[j] < v[i]){
            while(v[j] <= v[i]){
                v[j] += d;
                c++;
            }
        }
        i++;
    }
    // for(int i:v){
    //     cout << i << " ";
    // }
    cout << c - 4 << endl;
    return 0;
}