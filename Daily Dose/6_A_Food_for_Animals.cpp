#include <iostream>
using namespace std;

// Written by S@ndip
// https://codeforces.com/contest/1675/problem/A

int main()
{
    int t;
    cin >> t;
    int a, b, c, x, y;
    while(t--){
        cin >> a >> b >> c >> x >> y;
        if(x > a){
            if((x <= a + c && y <= b + (c - (x - a)))){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
        else{
            if((y <= b + c)){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
    }
    return 0;
}