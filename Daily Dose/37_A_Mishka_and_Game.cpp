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
int main()
{
    int n, a, b, m = 0, c = 0;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(a > b)
            m++;
        else if(a < b)
            c++;
    }
    if(m > c)
        cout << "Mishka";
    else if(m < c)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";
    
    return 0;
}