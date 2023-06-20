#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;
const int mod = 1000 * 1000 * 1000 + 9;

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

// Take input

template <typename T>
void take(T &a) { cin >> a; }
template <typename T>
void take(T &a, T &b) { cin >> a >> b; }
template <typename T>
void take(T &a, T &b, T &c) { cin >> a >> b >> c; }
template <typename T>
void take(T &a, T &b, T &c, T &d) { cin >> a >> b >> c >> d; }

// print output
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()

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
#define PRE(dp) cout << fixed << setprecision(dp);

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
#define printans(ans) cout << ans;

// S@ndip : Shree Ganeshay Namah

// https://codeforces.com/problemset/problem/197/A
// game Theory 
int main()
{

    int a, b, r;
    take(a, b, r);

    if(2 * r > min(a, b)){
        printans("Second");
    }
    else{
        printans("First");
    }
    
    return 0;
}
