//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
const int N = 1e5+10;

using LLI = long long int;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// Find the factor of given numbers
// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/762/A
int main()
{
    FIO

    LLI n, k;
    cin >> n >> k;
    vector <LLI> factor;
    // Factor of the number
    for(int i = 1;i <= sqrt(n);++i){
        if(n % i == 0){
            if(n/i == i){
                // cout << i << " ";
                factor.push_back(i);
            }
            else{
                // cout << i << " " << n/i << " ";
                factor.push_back(i);
                factor.push_back(n/i);
            }
        }
    }
    sort(factor.begin(), factor.end());


    if(k > factor.size())
        cout << -1;
    else  
        cout << factor[k - 1];

    return 0;
}