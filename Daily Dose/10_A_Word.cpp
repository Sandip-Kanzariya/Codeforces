#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// S@ndip
// https://codeforces.com/problemset/problem/59/A

int main()
{
    string str;
    cin >> str;
    int u = 0, l = 0;
    for(int i = 0;i < str.size();i++){
        if (str[i] >= 'A' && str[i] <= 'Z')
            u++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            l++;
    }
    if(u > l){
        // transform whole string in to upper / lower casse
        transform(str.begin(), str.end(), str.begin(), ptr_fun<int, int>(toupper));
    }
    else{
        transform(str.begin(), str.end(),str.begin(), ptr_fun<int, int>(tolower));
    }
    cout << str;
    return 0;
}