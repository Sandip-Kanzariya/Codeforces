//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <set>
using namespace std;
const int N = 1e5+10;
using LLI = long long;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/745/A
// https://codeforces.com/blog/entry/49126

int main()
{
    string s;
    cin >> s;
    int size = s.size();
    int l = size;

    set <string> ans;
    while(l--){
        char temp = s[size - 1];
        for (int i = size - 1; i > 0; i--)
        {
            s[i] = s[i - 1];
        }
        s[0] = temp; // shift last element at first position
        // cout << s << "\n";
        ans.insert(s);
    }
    cout << ans.size();
    return 0;
}
