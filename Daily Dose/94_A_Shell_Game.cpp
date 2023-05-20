//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <iomanip>
using namespace std;
const int N = 1e5+10;

using I = int;
using SI = short int;
using LI = long int;
using LLI = long long int;
using UI = unsigned int;
using USI = unsigned short int;
using ULI = unsigned long int;
using ULLI = unsigned long long int;


#define all(a) a.begin(), a.end()
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/35/A
// https://www.geeksforgeeks.org/find-out-the-correct-position-of-the-ball-after-shuffling/

int main()
{
    FIO
    // #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        // freopen("error.txt", "w", stderr);
        freopen("output.txt", "w", stdout);
    // #endif

    int s;
    cin >> s;
    int mat[3][2];
    for(int i = 0;i < 3;++i){
        cin >> mat[i][0] >> mat[i][1];
    }

    for (int i = 0; i < 3; i++)
    {
        if(s == mat[i][0])
            s = mat[i][1];
        else if(s == mat[i][1])
            s = mat[i][0];
    }
    

    cout << s ;
    return 0;
}