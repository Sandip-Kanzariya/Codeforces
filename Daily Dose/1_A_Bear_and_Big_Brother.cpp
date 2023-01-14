#include <iostream>
using namespace std;

// Written by S@ndip
// https://codeforces.com/contest/791/problem/A

int main()
{
    int x, y;
    cin >> x >> y;
    int i = 0;
    while(x <= y){
        x = 3 * x;
        y = 2 * y;
        i++;
    }
    cout << i;
    return 0;
}