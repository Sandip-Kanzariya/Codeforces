#include <iostream>
#include <vector>
using namespace std;

// S@ndip
// https://codeforces.com/problemset/problem/677/A
int main()
{
    int n, h, c = 0, t;
    cin >> n >> h;
    // cout << n << h;
    vector <int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
        if(v[i] > h){
            c++;
        }
        else{
            continue;
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    
    cout << n + c ;
    return 0;
}