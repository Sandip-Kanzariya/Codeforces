//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;


// S@ndip
// Try karo ak bar ho jayega
// https://codeforces.com/contest/32/problem/B

int main()
{
    string s, ans = "";
    cin >> s;

    int i = 0;
    while(i < s.size()){
        if(s[i] == '.'){
            ans += "0";
            i++;
        } 
        else if(s[i] == '-'){
            if(s[i + 1] == '-'){
                ans += "2";
                i += 2;
            }
            else{
                ans += "1";
                i += 2;
            }
        }
    }
    
    cout << ans;   
    return 0;
}