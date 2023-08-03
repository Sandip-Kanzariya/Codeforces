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
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;

        int f = 9;
        vector <int> v;
        while(n){
            if(n > f){
                v.push_back(f);
                n -= f;
                f--;
            }
            else{
                v.push_back(n);
                n = 0;
            }
        }

        int ans = 0;

        for (int i = v.size() - 1; i >= 0; --i)
        {   
            ans = ans * 10 + v[i];
        }

        cout << ans << "\n";
        
    }
    return 0;
}