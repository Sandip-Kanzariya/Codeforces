//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <iomanip>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// S@ndip
int main()
{
    FIO

    string s;
    cin >> s;

    // Convert into lower case
    transform(s.begin(), s.end(),s.begin(), ptr_fun<int, int>(tolower)); 
    int l = s.size();
   
    for(int i = 0;i < s.size();i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o' || s[i] == 'y'){
            s.erase(i, 1);
            s.insert(i, "_");
        }
    }
    string new_s = "";
    for(int i = 0;i < s.size();i++){
        
        if(s[i] == '_') continue;

        new_s += ".";
        new_s += s[i];
    }

    cout << new_s;
    return 0;
}