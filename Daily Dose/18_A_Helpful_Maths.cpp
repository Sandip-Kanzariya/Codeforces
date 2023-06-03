// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
void display_vector(vector <T> &v){
    for(int i = 0;i < v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

// S@ndip
// https://codeforces.com/problemset/problem/339/A
int main()
{
    string s;
    cin >> s;
    vector <char> v;
    // string n;

    for (int i = 0; i < s.size(); i++)
    {
        if(isdigit(s[i])){
            v.push_back(s[i]);
            // n[i] = s[i];
        }
    }
    // sort vector
    sort(v.begin(), v.end());
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {   
        if(isdigit(s[i])){
            // cout << s[i]
            s[i] = v[j];
            j++;
        }
    }
    cout << s;
    return 0;
}