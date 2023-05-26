#include <bits/stdc++.h>

using namespace std;

using LLI = long long int;
#define all(a) a.begin(), a.end()

template <typename T>
void take(T &a)
{
    cin >> a;
}
template <typename T>
void take(T &a, T &b) { cin >> a >> b; }
template <typename T>
void take(T &a, T &b, T &c) { cin >> a >> b >> c; }
template <typename T>
void take(T &a, T &b, T &c, T &d) { cin >> a >> b >> c >> d; }

#define printans(ans) cout << ans;

#define yes cout << "YES";
#define no cout << "NO";
#define wr2(a, b) cout << a << " " << b << endl

vector<pair<int, int>> movements = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1837/A

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int x, k;
        take(x, k);

        if(x % k != 0){
            cout << 1 << "\n";
            cout << x << "\n";
        }
        else{
            cout << 2 << "\n";
            cout << x - 1 << " " << 1 << "\n";
        }

    }

    return 0;
}