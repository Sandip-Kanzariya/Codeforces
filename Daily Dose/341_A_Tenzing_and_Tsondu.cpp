#include <bits/stdc++.h>
using namespace std;

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/contest/1842/problem/A

int main()
{

    
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        long long a, x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            x += a;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> a;
            y += a;
        }
        
        if(x > y) 
            cout << "Tsondu\n";
        else if(x < y) 
            cout << "Tenzing\n";
        else cout << "Draw\n";
    }
    return 0;
}
