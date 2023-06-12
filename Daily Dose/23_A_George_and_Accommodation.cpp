#include <iostream>
using namespace std;

// S@ndip
// https://codeforces.com/problemset/problem/467/A
int main()
{
    int t, r, n, c = 0;
    cin >> t;
    while(t--){
        cin >> r >> n;
        if(n - r >= 2)
            c++;
    }
    cout << c;
    return 0;
}