//#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define for_loop(i,n) for(int i = 0;i < n;i++)
#define pb push_back
#define mp make_pair

// S@ndip
int main()
{
    int t, a, b, c, d, s1, s2;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> d;
        s1 = a > b ? a : b;
        s2 = c > d ? c : d;

        if((s1 > (c < d ? c : d)) && (s2 > (a < b ? a : b))){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}