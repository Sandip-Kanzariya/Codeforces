#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
#include <iomanip>
using namespace std;
const int N = 1e5 + 10;

#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1741/A

int main()
{
    FIO

    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;

        int xa = 0, xb = 0, i = 0, j = 0;
        while(a[i] == 'X')
            xa++, i++;
        while(b[j] == 'X')
            xb++, j++;

        if(a[i] == b[j]){
            if(a[i] == 'M')
                cout << "=\n";
            else if(a[i] == 'L'){
                if(xa > xb) cout << ">\n";
                else if(xa < xb) cout << "<\n";
                else cout << "=\n";
            }
            else{
                if(xa < xb) cout << ">\n";
                else if(xa > xb) cout << "<\n";
                else cout << "=\n";
            }
        }
        else{
            if(a[i] < b[j]) cout << ">\n";
            else cout << "<\n";
        }
    }
    return 0;
}
