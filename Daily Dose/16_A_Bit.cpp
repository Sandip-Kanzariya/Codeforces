#include <iostream>
#include <string>
using namespace std;

// S@ndip
// https://codeforces.com/problemset/problem/282/A
int main()
{
    int t, k = 0;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        if(s[0] == '+' || s[2] == '+')
            k++;
        else
            k--;
    }
    cout << k ; 
    return 0;
}