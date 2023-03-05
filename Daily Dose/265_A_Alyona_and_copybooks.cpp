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
// https://codeforces.com/problemset/problem/740/A

// Take care of integer overflow 
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;


    // k : 
    int copy = ceil(n / 4.0) * 4 - n;

    // cout << copy << " ";

    // ( n + k ) % 4 == 0
    if(copy == 0){
        ww1(0);
    }
    else if(copy == 1){
        // 1 set of 1 copybook  || 3 set of 3 copybook (3 * 3 == 9 : 1 + 8) || 1 set of 3 copybook + 1 set of 2 copybook (5 : 1 + 4)
        ww1(min({(LLI)1 * a, (LLI)3 * c, (LLI)1 * c + 1 * b}));
    }
    else if(copy == 2){
        // 1 set of 2 copybook  || 2 set of 1 copybook (2 * 1 == 2) || 2 set of 3 copybook  (6 : 2 + 4)
        ww1(min({(LLI)1 * b, (LLI)2 * a, (LLI)2 * c}));
    }
    else if(copy == 3){
        // 3 set of 1 copybook || 1 set of 1 copybook + 1 set of 2 copybook || 1 set of 3 copybook
        ww1(min({(LLI)3 * a, (LLI)(1 * a + 1 * b), (LLI)1 * c }));
    }
}
