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
// https://codeforces.com/problemset/problem/136/A
// 
int main()
{
    FIO

    int n;
    cin >> n;

    int arr[n + 1];
    int k;
    for(int i = 1;i <= n;i++){
        cin >> k;
        arr[k] = i;
    }

    for(int i = 1;i <= n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}