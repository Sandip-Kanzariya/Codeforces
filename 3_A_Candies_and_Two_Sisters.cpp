#include <iostream>
using namespace std;

// Written by S@ndip
// https://codeforces.com/contest/1335/problem/A
int main()
{
    int t, n, a = 0;
    cin >> t;
    while(t--){
        cin >> n;
        if(n == 1 || n == 2){
            cout << a << "\n";
        }
        else{
            if(n & 1)
                cout << (n / 2) << "\n";
            else    
                cout << (n / 2) - 1 << "\n";
        }
    }
    return 0;
}