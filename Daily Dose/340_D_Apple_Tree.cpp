#include <bits/stdc++.h>
using namespace std;

using LLI = long long int;

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1843/D

// DFS : 
// Count how many ways node 'i' have to reach any leaf node 

vector <LLI> ways;
void treeDfs(vector <int> tree[],int node, int par){

    // Check is it a leaf node or not
    if(tree[node].size() == 1 && tree[node][0] == par){
        ways[node] = 1;
    }
    else{
        for(int ng : tree[node]){
            // Beacause 'ng' are comming from 'par' 
            if(ng != par){
                treeDfs(tree, ng, node);
                ways[node] += ways[ng];
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        ways.assign(n + 1, 0);
        vector <int> tree[n + 1];
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }
        
        treeDfs(tree, 1, 0);

        // for (int i = 1; i <= n; i++)
        // {
        //     cout << ways[i] << " ";
        // }
        // cout << "\n";        
        
        int q;
        cin >> q;

        for (int i = 0; i < q; i++)
        {
            int x, y;
            cin >> x >> y;
            cout << ways[x] * ways[y] << "\n";
        }
    }
    return 0;
}
