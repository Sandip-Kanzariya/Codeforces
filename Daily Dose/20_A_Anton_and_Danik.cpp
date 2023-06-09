#include <iostream>
#include <string>
using namespace std;

// S@ndip
// https://codeforces.com/problemset/problem/734/A
int main()
{
    int n, a = 0, d = 0;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'A')
            a++;
        else if(s[i] == 'D')
            d++;
    }
    if(a > d)
        cout << "Anton";
    else if(d > a)
        cout << "Danik";
    else 
        cout << "Friendship";
    return 0;
}