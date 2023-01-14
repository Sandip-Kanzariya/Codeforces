// #include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <climits>
// #include <iomanip>
// using namespace std;
// const int N = 1e5 + 10;

// #define FIO                           \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL);

// // S@ndip : Shree Ganeshay Namah
// // https://codeforces.com/problemset/problem/1741/A

// int main()
// {
//     FIO

//         int t;
//     cin >> t;

//     while (t--)
//     {
//         int am = 0, as = 0, al = 0;
//         int bm = 0, bs = 0, bl = 0;
//         string a, b;
//         cin >> a >> b;

//         // cout << a[a.size() - 1] << " ";
//         if (a[a.size() - 1] == 'M')
//         {
//             am = 1;
//         }
//         else if (a[a.size() - 1] == 'S')
//         {
//             if (a.size() == 0)
//                 as = 1;
//             else
//                 as = as - (a.size() - 1);
//         }
//         else
//         {
//             if (a.size() == 1)
//                 al = 1;
//             else
//                 al = al + a.size() - 1;
//         }

//         // For String b
//         if (b[b.size() - 1] == 'M')
//         {
//             bm = 1;
//         }
//         else if (b[b.size() - 1] == 'S')
//         {
//             if (b.size() == 1)
//                 bs = 1;
//             else
//                 bs = bs - (b.size() - 1);
//         }
//         else
//         {
//             if (b.size() == 1)
//                 bl = 1;
//             else
//                 bl = bl + b.size() - 1;
//         }

//         vector<int> va{as, am, al}, vac{as, am, al}, vb{bs, bm, bl}, vbc{bs, bm, bl};
//         sort(va.rbegin(), va.rend());
//         sort(vb.rbegin(), vb.rend());

//         int ia;
//         for (int i = 0;i < 3;i++)
//         {
//             if (va[0] == vac[i])
//             {
//                 ia = i;
//             }
//         }

//         int ib;
//         for (int i = 0;i < 3;i++)
//         {
//             if (vb[0] == vbc[i])
//             {
//                 ib = i;
//             }
//         }

//         if(ia == ib){
//             if(vac[ia] == vbc[ib])
//                 cout << "=\n";
//             else if(vac[ia] > vac[ib])
//                 cout << ">\n";
//             else
//                 cout << "<\n";
//         }
//         else{
//             if(ia > ib)
//                 cout << ">\n";
//             else
//                 cout << "<\n";

//         }
//         // cout << as << " " << am << " " << al << "\n";
//         // cout << bs << " " << bm << " " << bl << "\n";
//         // for(auto k : va) cout << k << " ";
//         // cout << "\n";

//         // for(auto k : vb) cout << k << " ";
//         // cout << "\n";

//         // int ma = INT_MIN;
//         // int flag = 0;
//         // for (int i = 2; i >= 0; i--)
//         // {
//         //     if (va[i] > vb[i])
//         //     {
//         //         int copy = ma;
//         //         ma = max(ma, va[i]);
//         //         if (copy != ma)
//         //             flag = 1;
//         //     }
//         //     else if (va[i] < vb[i])
//         //     {
//         //         int copy = ma;
//         //         ma = max(ma, vb[i]);
//         //         if (copy != ma)
//         //             flag = 2;
//         //     }
//         // }
//         // // cout << flag << "\n";

//         // if (flag == 0)
//         //     cout << "=\n";
//         // else if (flag == 1)
//         //     cout << ">\n";
//         // else
//         //     cout << "<\n";
//     }
//     return 0;
// }


#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
#include <iomanip>
using namespace std;
const int N = 1e5 + 10;

#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1741/A

int main()
{
    FIO

    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;

        int xa = 0, xb = 0, i = 0, j = 0;
        while(a[i] == 'X')
            xa++, i++;
        while(b[j] == 'X')
            xb++, j++;

        if(a[i] == b[j]){
            if(a[i] == 'M')
                cout << "=\n";
            else if(a[i] == 'L'){
                if(xa > xb) cout << ">\n";
                else if(xa < xb) cout << "<\n";
                else cout << "=\n";
            }
            else{
                if(xa < xb) cout << ">\n";
                else if(xa > xb) cout << "<\n";
                else cout << "=\n";
            }
        }
        else{
            if(a[i] < b[j]) cout << ">\n";
            else cout << "<\n";
        }
    }
    return 0;
}