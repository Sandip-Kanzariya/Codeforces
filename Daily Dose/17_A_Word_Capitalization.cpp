#include <iostream>
#include <string>
using namespace std;

// S@ndip
// https://codeforces.com/problemset/problem/281/A

int main()
{
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s;
    return 0;
}