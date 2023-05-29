#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// S@ndip
// https://codeforces.com/problemset/problem/112/A

// https://atcoder.jp/contests/abc292/tasks/abc292_a
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(),s1.begin(), ptr_fun<int, int>(toupper)); 
    transform(s2.begin(), s2.end(),s2.begin(), ptr_fun<int, int>(toupper));

    cout << s1.compare(s2);

    return 0;
}