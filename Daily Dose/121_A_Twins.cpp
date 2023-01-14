#include <iostream>
#include <array>
#include <vector>
using namespace std;


// https://codeforces.com/problemset/problem/160/A
int main()
{

    int n{};
    cin >> n;

    int v[n];
    int output{}, count{}, sum{}, my_sum{};

    for (int i{}; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    for (int i{}; i < n - 1; i++)
    {
        for (int j{i + 1}; j < n; j++)
        {

            if (v[j] > v[i])
            {
                int t = v[i];
                v[i] = v[j];
                v[j] = t;
            }
        }
    }

    for (int i{}; my_sum < (sum / 2) + 1; i++)
    {
        my_sum += v[i];
        count++;
    }

    cout << count << endl;

    return 0;
}