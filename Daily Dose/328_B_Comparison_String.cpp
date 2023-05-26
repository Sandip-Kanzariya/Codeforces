#include <bits/stdc++.h>

using namespace std;

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1837/B

// Find longest Consicutive lenght of '<' || '>' and +1 

int main()
{    
    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = 0, c = 1;

        for (int i = 1; i < n; i++)
        {
            if(s[i] == s[i - 1]){
                c++;
            }
            else{
                ans = max(ans, c);
                c= 1;
            }
        }
        cout << max(ans, c) + 1 << "\n";
    }
    
    return 0;
}


