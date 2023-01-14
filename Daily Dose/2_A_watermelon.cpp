#include <iostream>
using namespace std;

// Written by S@ndip
// https://codeforces.com/contest/4/problem/A
int main()
{
    int w;
    cin >> w;
    if(w > 2 && w % 2 == 0)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}