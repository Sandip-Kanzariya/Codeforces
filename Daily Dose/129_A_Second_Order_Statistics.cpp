//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <iomanip>
using namespace std;
const int N = 1e5 + 10;

#define vi vector<int>
#define pi pair<int, int>
#define umap unordered_map
#define uset unordered_set

#define all(a) a.begin(), a.end()
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define yes cout << "YES\n";
#define no cout << "NO\n";

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/22/A
// Sort 
int main()
{
    FIO
    int n;
    cin >> n;

    set <int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    vector <int> v(s.begin(), s.end());
    bool flag = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if(v[i] > v[i - 1]){
            cout << v[i];
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        cout << "NO";
        
    return 0;
}