//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

#define for_loop(i,n) for(int i = 0;i < n;i++)
#define pb push_back
#define mp make_pair
// S@ndip
// https://codeforces.com/problemset/problem/831/B
int main()
{
    
    string a, b, c;
    cin >> a >> b >> c;

    vector<pair<char, char>> p;
    
    // store in pair
    for (int i = 0; i < 26; i++)
    {
        p.pb(mp(a[i], b[i]));
    }

    string s = "";
    for (int i = 0; i < c.size(); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if(tolower(c[i]) == p[j].first){
                if(isupper(c[i])){
                    s += toupper(p[j].second);
                }
                else{
                    s += p[j].second;
                }
            }

            if(isdigit(c[i])){
                s += c[i];
                break;
            }
        }
    }
    

    cout << s ;
    
    
    return 0;
}