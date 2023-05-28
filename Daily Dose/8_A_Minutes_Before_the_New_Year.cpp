#include <iostream>
using namespace std;

// Written by S@ndip
// https://codeforces.com/problemset/problem/1283/A

int main()
{
    int t;
    cin >> t;
    int h, m;
    while(t--){
        cin >> h >> m;
        cout << 1440 - (h * 60 + m) << "\n";
    }
    return 0;
}