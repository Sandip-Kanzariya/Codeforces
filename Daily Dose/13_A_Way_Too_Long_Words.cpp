#include <iostream>
#include <string>
using namespace std;

// S@ndip
// https://codeforces.com/problemset/problem/71/A

int main()
{
    int t;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        if(s.size() <= 10)
            cout << s << "\n";
        else{
            cout << s[0]<< s.size() - 2 << s[s.size() - 1] << "\n";
        }
    }
    return 0;
}