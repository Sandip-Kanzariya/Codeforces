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

using I = int;
using SI = short int;
using LI = long int;
using LLI = long long int;
using UI = unsigned int;
using USI = unsigned short int;
using ULI = unsigned long int;
using ULLI = unsigned long long int;

#define vi vector<int>
#define pi pair<int, int>
#define umap unordered_map
#define uset unordered_set

#define all(a) a.begin(), a.end() - 1
#define rall(a) a.rbegin(), a.rend()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define ws1(a) cout << a << " "
#define wr1(a) cout << a << endl
#define wr2(a, b) cout << a << " " << b << endl
#define wr3(a, b, c) cout << a << " " << b << " " << c << endl
#define wr4(a, b, c, d) cout << a << " " << b << " " << c << " " << d << endl
#define ww1(a) cout << a << "\n"
#define ww2(a, b) cout << a << " " << b << "\n"
#define ww3(a, b, c) cout << a << " " << b << " " << c << "\n"
#define ww4(a, b, c, d) cout << a << " " << b << " " << c << " " << d << "\n"
#define FOR(i, s, e) for (int i = s; i < e; ++i)
#define FORR(i, s, e) for (int i = s; i >= e; --i)
#define FT first
#define SC second
#define pb push_back
#define pob pop_back
#define mp make_pair
#define PRE cout << fixed << setprecision(10);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

vector<pair<int, int>> sides = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
vector<pair<int, int>> movements = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};

clock_t startTime;
void getCurrentTime() { cerr << (double)(clock() - startTime) / CLOCKS_PER_SEC; }

int sum() { return 0; }
template <typename T, typename... Args>
auto sum(T a, Args... args) { return a + sum(args...); }

#define yes cout << "YES\n";
#define no cout << "NO\n";
// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1023/A

// Thinck about all test cases 

int main()
{
    int n, m;
    cin >> n >> m;
    string s, t, sclone ="";
    cin >> s >> t;

    if(s == t){
        cout << "YES";
        return 0;
    }
    
    if(n > m + 1){
        cout << "NO";
        return 0;
    }

    if(n == 1 && m == 1){
        if(s == t)
            cout << "YES";
        else if(s == "*")
            cout << "YES";
        else cout << "NO";

        return 0;
    }

    int index;
    for (int i = 0; i < n; i++)
    {
        if(s[i] != '*')
            sclone += s[i];
        else
            index = i;
    }
    // ww1(sclone);
    string tclone = "";

    for (int i = 0; i < index; i++)
    {
        tclone += t[i];
    }
    
    for (int i = m - (n - index - 1); i < m; i++)
    {
        tclone += t[i];
    }

    // ww1(tclone);
    
    if(sclone == tclone) cout << "YES";
    else cout << "NO";
    
    return 0;
}
