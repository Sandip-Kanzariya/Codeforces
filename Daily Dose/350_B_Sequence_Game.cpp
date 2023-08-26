#include <bits/stdc++.h>

using namespace std;

// https://codeforces.com/problemset/problem/1862/B
int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        
        
        int n;
        
        cin >> n;
        
        vector <int> v(n, 0);
        for(int i = 0;i < n;i++){
            cin >> v[i];
        }
        
        vector <int> a;
        a.push_back(v[0]);
        
        for(int i = 1;i < n;i++){
            
            if(v[i - 1] <= v[i]){
                a.push_back(v[i]);
            }
            else{
                a.push_back(v[i]);
                a.push_back(v[i]);
            }
        }
        
        cout << a.size() << "\n";
        for(int i = 0;i < a.size();i++){
            cout << a[i] << " ";
        }
        cout << "\n";
        
    }
    return 0;
}