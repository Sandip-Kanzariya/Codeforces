#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_set>
using namespace std;

// S@ndip
// https://codeforces.com/problemset/problem/520/A

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    transform(s.begin(), s.end(),s.begin(), ptr_fun<int, int>(toupper));
    
    unordered_set <char> ser;
    for (int i = 0; i < n; i++)
    {
        ser.insert(s[i]);
    }
    
    string new_string;
    string t;
    int j = 0;
    unordered_set <char> :: iterator it = ser.begin();
    for (; it != ser.end(); it++)
    {
        t = *it;
        new_string.insert(j, t);
        j++;
    }

    bool flag = true;
    sort(new_string.begin(), new_string.end());


    char ch = 'A';
    for (int i = 0; i < new_string.size(); i++)
    {   
        if(new_string[i] != ch){
            flag = false;
        }
        ch++;
    }
    if(new_string.size() == 26){
        if(flag){
        cout << "YES"; 
        }
        else{
        cout << "NO"; 
        }
    }
    else{
        cout << "NO";    
    }
    
    
    return 0;
}