//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// S@ndip
// https://codeforces.com/problemset/problem/965/A
// 
int main()
{
    FIO
    int k, n, s, p;
    cin >> k >> n >> s >> p;
    
    int sPerPerson= (n-1)/s+1;
    int totalS= sPerPerson * k;

    int totalP= (totalS-1)/p+1;
    cout << totalP;
    return 0;
}