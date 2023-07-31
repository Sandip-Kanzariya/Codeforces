//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

// S@ndip
// learn about integer limit exit after 1-e8

int main()
{
    long long int n, m, a; // 10 ^ 9
    cin >> n >> m >> a;
    long long int c = 0;

    if(n % a == 0)
        c = n / a;
    else 
        c = n / a + 1;
    
    long long int i = 0;
    
    if(m % a == 0)
        i = m / a;
    else        
        i = m / a + 1;
    
    cout << c * i;
    return 0;
}