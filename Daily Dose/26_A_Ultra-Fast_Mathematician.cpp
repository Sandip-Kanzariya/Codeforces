#include <iostream>
using namespace std;

// S@ndip
// https://codeforces.com/problemset/problem/61/A

int main()
{
    string s, j;
    cin >> s >> j;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == j[i])
            cout << 0;
        else
            cout << 1;
    }
    
    return 0;
}