#include <bits/stdc++.h>
using namespace std;

//
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

//
using I = int;
using lli = long long int;
using ulli = unsigned long long int;

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
#define ws1(a) cout << a << " "
#define wr1(a) cout << a << endl
#define wr2(a, b) cout << a << " " << b << endl
#define wr3(a, b, c) cout << a << " " << b << " " << c << endl
#define wr4(a, b, c, d) cout << a << " " << b << " " << c << " " << d << endl
#define ww1(a) cout << a << "\n"
#define ww2(a, b) cout << a << " " << b << "\n"
#define ww3(a, b, c) cout << a << " " << b << " " << c << "\n"
#define ww4(a, b, c, d) cout << a << " " << b << " " << c << " " << d << "\n"

//
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()

// short hand
#define fr(i, s, e) for (int i = s; i < e; ++i)
#define frr(i, s, e) for (int i = s; i >= e; --i)
#define vi vector<int>

// Take Vector
void scan(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
}

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

//
#define PRE(dp) cout << fixed << setprecision(dp);
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define printans(ans) cout << ans;

// Functions
bool isPower2(long long n)
{
    return (n & (n - 1)) == 0;
}

bool isPrime(long long n)
{

    if (n == 1)
        return false;

    // Upto sqrt(n)
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

lli fact(int n)
{

    if (n == 0 || n == 1)
        return 1;

    return n * fact(n - 1);
}

// https://codeforces.com/contest/1853/problem/A
// S@ndip : Shree Ganeshay Namah

int main()
{
    FIO

        int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        scan(v);

        if (!is_sorted(all(v)))
        {
            cout << 0 << "\n";
            continue;
        }
        else
        {
            int x = 1e9;
            for (int i = 1; i < n; i++)
            {
                x = min(v[i] - v[i - 1], x);
            }
            cout << x / 2 + 1 << "\n";
        }
    }
    return 0;
}
