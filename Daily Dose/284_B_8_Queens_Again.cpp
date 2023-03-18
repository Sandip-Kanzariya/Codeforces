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
// https://codeforces.com/problemset/gymProblem/100947/B

int x[8] = {0};
int sol = 0;

bool place(int r, int c)
{

    for (int i = 0; i < r; i++)
    {
        if (x[i] == c or abs(x[i] - c) == abs(i - r))
        {
            return false;
        }
    }
    return true;
}

vector<string> vs;
string name = "";
void solve(int k, int n)
{

    if (n == k)
    {
        for (int i = 0; i < n; i++)
        {
            name += x[i] + '0';
        }
        // cout << name << "\n";
        vs.push_back(name);
        name = "";
        sol++;
    }

    for (int i = 0; i < n; i++)
    {
        if (place(k, i))
        {
            x[k] = i;
            solve(k + 1, n);
        }
    }
}
int main()
{

    solve(0, 8);

    int t;
    cin >> t;
    while (t--)
    {
        string y = "";
        set<int> st;

        for (int i = 0; i < 8; i++)
        {
            string s;
            cin >> s;
            int row = s[0] - 64;
            int column = s[1] - '0';
            st.insert(row);

            x[row - 1] = column - 1;
        }

        if (st.size() != 8)
        {
            cout << "Invalid\n";
            continue;
        }
        for (int i = 0; i < 8; i++)
        {
            y += x[i] + '0';
        }

        bool flag = true;
        for (auto k : vs)
        {
            if (k == y)
            {
                cout << "Valid\n";
                flag = false;
            }
        }

        if (flag)
            cout << "Invalid\n";
    }
    return 0;
}
