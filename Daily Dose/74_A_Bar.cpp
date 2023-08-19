//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <iomanip>
// #include <cctype>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// S@ndip
// https://codeforces.com/problemset/problem/56/A
// string to integer, hexadecimal, binary.........

int main()
{
    FIO

    int t;
    cin >> t;
    unordered_set <string> s; 
    s.insert("ABSINTH");
    s.insert("BEER");
    s.insert("BRANDY");
    s.insert("CHAMPAGNE");
    s.insert("GIN");
    s.insert("RUM");
    s.insert("SAKE");
    s.insert("TEQUILA");
    s.insert("VODKA");
    s.insert("WHISKEY");
    s.insert("WINE");

    string str;  
    
    int c = 0;    
    size_t st;
    while(t--){
        cin >> str;
        if(!isalpha(str[0])){
            // cout << stoi(str) << " "; // INTEGER 
            // cout << stoi(str, nullptr, 16) << " "; // HEXADECIMAL

            if(stoi(str) < 18){
                c++;
            }
        }
        else if(s.find(str) != s.end()){
            c++;
        }
    }
    cout << c;
    
    return 0;
}
