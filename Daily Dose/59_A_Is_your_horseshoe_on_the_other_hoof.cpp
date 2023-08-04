// #include <iostream>
// using namespace std;

// // S@ndip
// int main()
// {
//     long long int a, b, c, d, co = 0;
//     cin >> a >> b >> c >> d;
//     if(a == b && a == c && a == d){
//         cout << 3;
//     }
//     else{
//         if(abs(a - b) == 0)
//             co++;
//         if(abs(a - c) == 0)
//             co++;
//         if(abs(a - d) == 0)
//             co++;
//         if(abs(b - c) == 0)
//             co++;
//         if(abs(b - d) == 0)
//             co++;
//         if(abs(c - d) == 0)
//             co++;
            
//         cout << co;
//     }
    
//     return 0;
// }


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

    vector <int> v;
    int t;
    for (int i = 0; i < 4; i++)
    {
        cin >> t;
        v.push_back(t);
    }

    unordered_set <int> valera;

    for(auto i: v){
        valera.insert(i);
    }

    cout << 4 - valera.size();
    
    return 0;
}