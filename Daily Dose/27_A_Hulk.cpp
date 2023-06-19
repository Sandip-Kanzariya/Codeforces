#include <iostream>
using namespace std;

// S@ndip
// https://codeforces.com/problemset/problem/705/A

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if(i % 2 == 0 && i == n - 1)  
            cout << "I hate it ";
        else if(i % 2 != 0 && i == n - 1)
            cout << "I love it ";
        else if(i % 2 == 0 && i < n - 1)
            cout << "I hate that ";
        else if(i % 2 != 0 && i < n - 1)
            cout << "I love that ";
        // if(i % 2 == 0 && i == n - 1)  
        //     cout << "I love it ";
        // else if(i % 2 != 0 && i == n - 1)
        //     cout << "I hate it ";
        // else if(i % 2 == 0 && i < n - 1)
        //     cout << "I love that ";
        // else if(i % 2 != 0 && i < n - 1)
        //     cout << "I hate that ";
    }
    
    return 0;
}