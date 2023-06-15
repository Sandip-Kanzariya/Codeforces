#include <iostream>
#include <iomanip>
using namespace std;

// S@ndip
// https://codeforces.com/problemset/problem/200/B
int main()
{
    int t;
    cin >> t;
    int c, b = t;
    double ans = 0;
    while(t--){
        cin >> c;
        ans += c / 100.0;
    }
    cout << fixed << setprecision(12);
    cout << (ans / b ) * 100.0;

    return 0;
}