#include <bits/stdc++.h>
using namespace std;

int c = 1e9 + 7;

// S@ndip : Shree Ganeshay Namah

// https://codeforces.com/problemset/problem/1862/A
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char matrix[n][m];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
            }
        }

        string s = "vika";
        int c = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                
                // cout << matrix[j][i] << " ";
                if(matrix[j][i] == s[c]){
                    c++;
                    break;
                }

            }
            // cout << "\n";
        }

        if(c == 4){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }

    return 0;
}