#include <iostream>
#include <vector>
using namespace std;

// S@ndip
// https://codeforces.com/problemset/problem/158/A

int main()
{
    int n, k, t, co = 0;
    cin >> n >> k;
    vector <int> v;
    for(int i = 0;i < n;i++){
        cin >> t;
        v.push_back(t);
    }
    for(int i = 0;i < n;i++){
        if(v[i] >= v[k - 1] && v[i] > 0)
            co++;
    }
    cout << co;

    return 0;
}