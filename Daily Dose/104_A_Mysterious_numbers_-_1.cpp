//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <iomanip>
using namespace std;
const int N = 1e5+10;
using LLI = long long;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/171/A
// Number reverse + observation in Question + String to long long int
int main()
{
    FIO
    LLI a, b;
    cin >> a >> b;
    string s = to_string(b);
    reverse(s.begin(), s.end());
    // cout << s;
    b = stoll(s);
    
    cout << a + b;
    return 0;
}