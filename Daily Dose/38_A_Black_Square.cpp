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
int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case '1':
            ans += arr[0];
            break;
        
        case '2':
            ans += arr[1];
            break;
        
        case '3':
            ans += arr[2];
            break;
        
        case '4':
            ans += arr[3];
            break;
        }
    }
    
    cout << ans ;
    return 0;
}