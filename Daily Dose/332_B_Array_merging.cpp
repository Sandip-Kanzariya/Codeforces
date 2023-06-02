#include <bits/stdc++.h>
using namespace std;

const int N = 1e7;
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
// First Element insert into c and remove from a / b
// https://codeforces.com/contest/1831/problem/B

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        vector<int> a(n + 1, 0);
        vector<int> b(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }

        vector<int> fa(n + n + 1, 0);
        vector<int> fb(n + n + 1, 0);

        int p = 1;
        for (int i = 2; i <= n; i++)
        {
            if (a[i] != a[i - 1])
            {
                fa[a[i - 1]] = max(fa[a[i - 1]], i - p);
                p = i;
            }
        }

        fa[a[n]] = max(fa[a[n]], n - p + 1);

        // for (int i = 0; i <= n + n; i++)
        // {
        //     cout << fa[i] << " ";
        // }

        //
        p = 1;
        for (int i = 2; i <= n; i++)
        {
            if (b[i] != b[i - 1])
            {
                fb[b[i - 1]] = max(fb[b[i - 1]], i - p);
                p = i;
            }
        }
        fb[b[n]] = max(fb[b[n]], n - p + 1);

        // cout << "\n";
        // for (int i = 0; i <= n + n; i++)
        // {
        //     cout << fb[i] << " ";
        // }

        // cout << "\n";

        int ans = 0;
        for (int i = 1; i <= n + n; i++)
        {
            ans = max(ans, fa[i] + fb[i]);
        }

        cout << ans << "\n";
    }
    return 0;
}
