#include <iostream>
#include <vector>
using namespace std;

// S@ndip
// https://codeforces.com/problemset/problem/1030/A
int main()
{
    int t, n;
    bool hard_problem = false;
    cin >> t;
    vector <int> V;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        V.push_back(n);
        if(V[i] == 1){
            hard_problem = true;
        }
    }
    
    if(hard_problem)
        cout << "HARD" ;
    else 
        cout << "EASY" ;

    return 0;
}