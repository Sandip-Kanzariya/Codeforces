#include <iostream>
#include <string>
using namespace std;

#define for_loop(i,n) for(int i = 0;i < n;i++)
#define pb push_back
// S@ndip
// https://codeforces.com/problemset/problem/785/A

int main()
{
    int t, ans = 0;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        if(s[0] == 'I')
            ans += 20;
        else if(s[0] == 'T')
            ans += 4;
        else if(s[0] == 'C')
            ans += 6;
        else if(s[0] == 'O')
            ans += 8;
        else if(s[0] == 'D')
            ans += 12;
    }
    cout << ans;
    
    return 0;
}