#include <iostream>
using namespace std;

#define INT long long int
// S@ndip
int main()
{
    INT t;
    cin >> t;
    if(t % 2 == 0)
        cout << t / 2 ;
    else 
        cout << ((t - 1) / 2) - t;
    return 0;
}