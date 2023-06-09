#include <iostream>
#include <string>
using namespace std;

// S@ndip
// https://codeforces.com/problemset/problem/41/A

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    bool Right_translation = true;
    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i] != s2[s2.size() - i - 1])
            Right_translation = false;
    }
    if(Right_translation){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
    return 0;
}