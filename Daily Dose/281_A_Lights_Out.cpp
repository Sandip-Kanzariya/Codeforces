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
// https://codeforces.com/contest/275/problem/A


// https://codeforces.com/problemset/problem/462/A
// Check Boundary
bool isSafe(int n, int i, int j)
{

    if (i >= 0 && j >= 0 && i < n && j < n)
        return true;

    return false;
}

int main()
{

    int matrix[3][3];
    bool ans[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans[i][j] = 1;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            // even then state will not chage

            // odd then [ 1 --> 0 ] or [ 0 ----> 1 ]

            if (matrix[i][j] % 2 != 0)
            {
                ans[i][j] = !ans[i][j];
                for (auto k : sides)
                {
                    int x = k.first;
                    int y = k.second;

                    int p = i + x;
                    int q = j + y;

                    if (isSafe(3, p, q))
                    {
                        ans[p][q] =  !ans[p][q];
                    }
                }
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j];
        }

        cout << "\n";
    }

    return 0;
}
