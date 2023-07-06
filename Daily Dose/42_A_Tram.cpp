//#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// S@ndip
int main()
{
    int t;
    cin >> t;
    int a, b, ans = 0, max  = 0;
    while(t--){
        cin >> a >> b;
        ans += b - a;

        if(ans > max)
            max = ans;
    }
    cout << max ;
    return 0;
}