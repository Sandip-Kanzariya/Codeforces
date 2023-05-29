#include <iostream>
using namespace std;

// S@ndip
// https://codeforces.com/problemset/problem/1692/A

int main()
{
    int t, a, b, c, d, co = 0;
    cin >> t;
    while(t--){
        co = 0;
        cin >> a >> b >> c >> d;
        if(b > a)
            co++;
        if(c > a)
            co++;
        if(d > a)
            co++;
        cout << co << "\n";
    }
    return 0;
}