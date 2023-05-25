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
// https://codeforces.com/problemset/problem/1833/C

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        take(n);

        vector <int> a(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        // 
        sort(a.begin(), a.end());

        // We have to make parity of wholr array as same as minimum element in given arrat (a) : For make positive number 
        if(a[0] % 2){ // Odd Parity
            cout << "YES\n";
        }
        else{   // Make Even Parity : IF there is any element is odd in array then we can't make even parity because (odd - even = odd)
            bool flag = 0;
            for (int i = 0; i < n; i++)
            {
                if(a[i] % 2){

                    flag = 1;
                    continue;
                }
            }
            if(flag) cout << "NO\n";
            else cout << "YES\n";            
        }
    }

    return 0;
}
