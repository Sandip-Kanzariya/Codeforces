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
// 
int main()
{
    int m, n;
    cin >> m >> n;
    char arr[m][n];
    bool black = false;
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == 'W' || arr[i][j] == 'G' || arr[i][j] == 'B'){
                black = true;
                count ++;
                continue;
            }
            else if(arr[i][j] == 'Y' || arr[i][j] == 'M' || arr[i][j] == 'C')
                black = false;
                break;
        }
        
    }
 
    if(black && count == m * n)
        cout << "#Black&White";
    else
        cout << "#Color";

     
    return 0;
}