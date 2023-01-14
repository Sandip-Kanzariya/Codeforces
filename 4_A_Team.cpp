#include <iostream>
using namespace std;

// Written by S@ndip
// https://codeforces.com/contest/231/problem/A
int main()
{
    int n;
    cin >> n;
    int p, v, t, c = 0;
    while(n--){
        cin >> p >> v >> t;
        if(p == 1 && v == 1 || v == 1 && t == 1 || t == 1 && p == 1)
            ++c;
    }
    cout << c << "\n";
    return 0;
}