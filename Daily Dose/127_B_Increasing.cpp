//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
using namespace std;
const int N = 1e5+10;

using I = int;
using SI = short int;
using LI = long int;
using LLI = long long int;
using UI = unsigned int;
using USI = unsigned short int;
using ULI = unsigned long int;
using ULLI = unsigned long long int;

#define vi vector<int>
#define pi pair<int, int>
#define umap unordered_map
#define uset unordered_set

#define all(a) a.begin(), a.end()
#define FOR(i, s, e) for (int i = s ; i < e ; ++i)
#define FORR(i, s, e) for (int i = s; i >= e; --i)
#define ST first
#define pb push_back
#define SC second
#define pob pop_back
#define mp make_pair
#define PRE  cout << fixed << setprecision(10);
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define yes cout << "YES\n";
#define no cout << "NO\n";

vector<pair<int, int>> sides = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
vector<pair<int, int>> movements = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1},{-1, 1}, {-1, -1}};

clock_t startTime;
double getCurrentTime() {return (double)(clock() - startTime) / CLOCKS_PER_SEC;}

// S@ndip : Shree Ganeshay Namah
// https://codeforces.com/problemset/problem/1742/B
// Unordered_map
int main()
{
    FIO

    I t;
    cin >> t;
    while(t--){
        umap<I, I> um;
        I n;
        cin >> n;
        FOR(i, 0, n){

            I temp;
            cin >> temp;
            um[temp]++;
        }

        if(um.size() == n)
            yes
        else
            no
    }
    return 0;
}