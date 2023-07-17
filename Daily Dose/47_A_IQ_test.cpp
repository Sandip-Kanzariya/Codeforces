//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

#define for_loop(i,n) for(int i = 0;i < n;i++)
#define pb push_back
#define mp make_pair
// S@ndip
// https://codeforces.com/problemset/problem/25/A

int main()
{
    int t;
    cin >> t;
    int arr[t];
    int e = 0, o = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];

        if(arr[i] % 2 == 0)
            e++;
        else
            o++;
    }

    
    if(e > o){
        for (int i = 0; i < t; i++)
        {
            if(arr[i] % 2 != 0){
                cout << i + 1 ;
                break;
            }
        }
    }

    else{
        for (int i = 0; i < t; i++)
        {
            if(arr[i] % 2 == 0){
                cout << i + 1 ;
                break;
            }
        }
    }
    
    
    return 0;
}


/*
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <climits>
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


#define FOR(i, s, e) for (int i = s ; i < e ; ++i)
#define FORR(i, s, e) for (int i = s; i >= e; --i)
#define ST first
#define SC second
#define pb push_back
#define pob pop_back
#define mp make_pair
#define PRE  cout << fixed << setprecision(10);
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// S@ndip
int main()
{
    FIO

    int n;
    cin >> n;
    int arr[n + 1], marks[n + 1] = {0};
    vector <int> count;
    unordered_map <int, int> c;
    FOR(i, 1, n + 1){
        cin >> arr[i];
        if(arr[i] % 2 == 0){
            marks[i] = 1;
            count.push_back(arr[i]);

        }
    }

    FOR(i, 1, n + 1){
        // cout << arr[i]  << " " << marks[i] << "\n";
        c[marks[i]]++;
    }

    int max = INT_MIN;
    for(auto i : c){
        // cout << i.first << " " << i.second << "\n";
        if(i.second > max)
            max = i.second;
    }
    int te;
    for(auto i : c){
        if(i.second == max)
            te = i.first;
    }
    if(te == 1){
        FOR(i, 1, n + 1){
            if(arr[i] % 2 != 0)
                cout << i;
        }
    }
    else{
        FOR(i, 1, n + 1){
            if(arr[i] % 2 == 0)
                cout << i;
        }
    }

    return 0;
}
*/