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
// https://codeforces.com/problemset/problem/1837/C

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        // ?1 : 01
        // ?0 : 00

        if(s[0] == '?') s[0] = '0';
        

        // 1? : 11
        // 0? : 00
        for (int i = 1; i < s.size(); i++)
        {
            if(s[i] == '?')
                s[i] = s[i - 1];
        }
        
        cout << s << "\n";
    }

    return 0;
}
