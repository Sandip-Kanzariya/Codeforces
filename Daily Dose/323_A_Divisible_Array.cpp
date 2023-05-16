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

#define printans(ans) cout << ans;

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1828/A

int main()
{

    int t;
    take(t);

    while (t--)
    {   
        int n;
        take(n);

        for (int i = 1; i <=n; i++)
        {
            cout << i * 2 << " ";
        }
        cout << "\n";
    }
    return 0;
}
