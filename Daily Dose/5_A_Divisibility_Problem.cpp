#include <iostream>
using namespace std;

// Written by S@ndip
// https://codeforces.com/contest/1328/problem/A

int main()
{
    int t;
    cin >> t;
    int a, b, c;
    while(t--){
        c = 0;
        cin >> a >> b;
        if(a % b == 0){
            c = 0;
        }
        else{
            c = b - a % b;
        }
        cout << c << "\n";
    }
    return 0;
}
