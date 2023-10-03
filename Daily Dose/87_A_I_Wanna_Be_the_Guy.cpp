// #include <iostream> 
// #include <unordered_set>
// using namespace std;

// // S@ndip
// int main()
// {
//     int levels, t, j = 0;
//     cin >> levels;
//     unordered_set<int> total;
//     while(t != '\n'){
//         cin >> t;
//         total.insert(t);
//     }
//     // while(j != 50){
//     //     cin >> t;
//     //     total.insert(t);
//     //     j++;
//     // }
    
//     if(total.size() == levels)
//         cout << "I become the guy.";
//     else
//         cout << "Oh, my keyboard!";

//     // cout << total.size() << "\n";
//     // unordered_set <int> :: iterator it = total.begin();
//     // for (; it != total.end(); it++)
//     // {
//     //     cout << *it << " ";
//     // }
    
//     return 0;
// }

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
// https://codeforces.com/problemset/problem/469/A
// Understand question Properly

int main()
{
    int n;
    cin >> n;
    
    int f;
    cin >> f;
    unordered_set <int> un;
    for(int i = 0;i < f;++i){
        int t;
        cin >> t;
        un.insert(t);
    }

    int s;
    cin >> s;
    for(int i = 0;i < s;++i){
        int t;
        cin >> t;
        un.insert(t);
    }
    
    if(un.size() == n){
        cout << "I become the guy.";
    }
    else{
        cout << "Oh, my keyboard!";
    }

    return 0;
}