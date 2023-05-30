#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

// S@ndip
// https://codeforces.com/problemset/problem/236/A

int main()
{
    string name;
    cin >> name;

    // store distince elements only
    unordered_set<char> s;
    for (int i = 0; i < name.size(); i++)
    {
        s.insert(name[i]);
    }
    
    if(s.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else    
        cout << "IGNORE HIM!";
    return 0;
}