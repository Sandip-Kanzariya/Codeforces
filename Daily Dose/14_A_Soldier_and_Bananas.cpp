#include <iostream>
using namespace std;

// S@ndip
// https://codeforces.com/problemset/problem/546/A
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int a = k * w * (w + 1) / 2;
    if(a <= n)
        cout << 0 ;
    else{
        cout << a - n;
    }
    return 0;
}