//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <iomanip>
#include <ctime>
using namespace std;
const int N = 1e8;

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

#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define min3(a, b, c)   min(a, min(b, c))
#define max3(a, b, c)   max(a, max(b, c))
#define ws1(a)          cout << a << " "
#define wr1(a)          cout << a << endl
#define wr2(a, b)       cout << a << " " << b << endl
#define wr3(a, b, c)    cout << a << " " << b << " " << c << endl
#define wr4(a, b, c, d) cout << a << " " << b << " " << c << " " << d << endl
#define ww1(a)          cout << a << "\n"
#define ww2(a, b)       cout << a << " " << b << "\n"
#define ww3(a, b, c)    cout << a << " " << b << " " << c << "\n"
#define ww4(a, b, c, d) cout << a << " " << b << " " << c << " " << d << "\n"
#define FOR(i, s, e)    for (int i = s; i < e; ++i)
#define FORR(i, s, e)   for (int i = s; i >= e; --i)
#define FT              first
#define SC              second
#define pb              push_back
#define pob             pop_back
#define mp              make_pair
#define PRE             cout << fixed << setprecision(10);
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

#define yes cout << "Yes\n";
#define no cout << "No\n";
#define pr(x) cout << "Division " << x << "\n";


// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1743/A


int main()
{
    FIO
    int t;
    cin >> t;

    while (t--)
    {   
        int n;
        cin >> n;

        vector <int> v(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        // n number are not consider in set of numbers
        n = 10 - n;

        // select 2 numbers from remaining numbers : C(n, 2) : n is updated
        // arrange 2 items in four places : C(4, 2)

        // ans : C(n, 2) * C(4, 2)
        cout << n * (n - 1) / 2 * 6 << "\n";

    }
    
    return 0;
}
