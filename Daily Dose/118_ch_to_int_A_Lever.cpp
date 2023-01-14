#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;
using LLI = long long int;
const LLI N = 1e12 + 10;

#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/376/A


// stack + string functions + character to integer( ch - '0' )

int main()
{
    FIO
    string s;
    cin >> s;
    stack<char> st;
    LLI pivot = s.find('^');
    // cout << pivot << " ";
    for (LLI i = 0; i < pivot; i++)
    {
        st.push(s[i]);
    }

    LLI si = 1;

    // cout << si;
    LLI l_sum = 0;
    while (!st.empty())
    {
        // cout << st.top();
        if(st.top() != '='){
            char c = st.top();
            l_sum += si * (c - '0'); // char to integer
            // cout << (c - '0') * 4<< " ";
        }

        si++;    
        st.pop();
    }

    // cout << l_sum << " ";

    LLI r_sum = 0;
    for (LLI i = pivot + 1; i < s.size(); i++)
    {
        st.push(s[i]);
    }
    stack <char> s1;

    while(!st.empty()){
        s1.push(st.top());
        st.pop();
    }

    // while(!s1.empty()){
    //     cout << s1.top();
    //     s1.pop();
    // }

    si = 1;
    while(!s1.empty()){
        // cout << st.top();
        // st.pop();

        if(s1.top() != '='){
            char c = s1.top();
            // cout << c << " ";
            r_sum += si * (c - '0');
        }
        si++;
        s1.pop();
    }

    // cout << r_sum ;

    if(l_sum < r_sum) cout << "right";
    else if(l_sum > r_sum) cout << "left";
    else cout << "balance";
    return 0;
}