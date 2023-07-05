//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// S@ndip
int main()
{
    int n;
    cin >> n;

    int arr[n][n] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][0] = 1;
            arr[0][j] = 1; 
        }
    }
       
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1]; 
        }
    }
    
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " "; 
    //     }
    //     cout << "\n";
    // }

    cout << arr[n - 1][n - 1] ;
    return 0;
}