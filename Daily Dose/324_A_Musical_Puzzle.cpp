#include <bits/stdc++.h>

using namespace std;

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1833/A

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        set <string> st;

        for (int i = 0; i < n - 1; i++)
        {
            st.insert(s.substr(i, 2));    
        }
        cout << st.size() << "\n";
        
    }

   return 0;
}