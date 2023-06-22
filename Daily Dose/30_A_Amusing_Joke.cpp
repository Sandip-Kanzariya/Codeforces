//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

#define for_loop(i,n) for(int i = 0;i < n;i++)
#define pb push_back
// S@ndip
// https://codeforces.com/problemset/problem/141/A

int main()
{
    string name, host, letters;
    cin >> name >> host >> letters;

    name += host;
    sort(name.begin(), name.end());

    // cout << name << "\n";
    sort(letters.begin(), letters.end());
    // cout << letters << "\n";

    bool right = true;
    if(name == letters){
        cout << "YES";
    }
    else{
        for_loop(i, name.size() > letters.size() ? name.size() : letters.size()){
            if(name[i] != letters[i]){
                right = false;
                break;
            }
        }

    if(right)
        cout << "YES";
    else
        cout << "NO";
    }

    return 0;
}