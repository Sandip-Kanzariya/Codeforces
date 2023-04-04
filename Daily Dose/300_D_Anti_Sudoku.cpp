#include <iostream>

using namespace std;

// https://codeforces.com/problemset/problem/1335/D

int rt(int v)
{

    if (v == 9)
        return 1;

    return ++v;
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int grid[9][9];
        for (int i = 0; i < 9; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < 9; j++)
            {

                grid[i][j] = s[j] - '0';
            }
        }

        // Complete in 9 Operations 
        
        /*
            0 1 2 3 4 5 6 7 8
        0   * . . . . . . . .
        1   . . . * . . . . .
        2   . . . . . . * . .
        3   . * . . . . . . .
        4   . . . . * . . . .
        5   . . . . . . . * .
        6   . . * . . . . . .
        7   . . . . . * . . .
        8   . . . . . . . . *

        */

        grid[0][0] = rt(grid[0][0]);
        grid[1][3] = rt(grid[1][3]);

        grid[2][6] = rt(grid[2][6]);
        grid[3][1] = rt(grid[3][1]);
        grid[4][4] = rt(grid[4][4]);
        grid[5][7] = rt(grid[5][7]);
        grid[6][2] = rt(grid[6][2]);
        grid[7][5] = rt(grid[7][5]);
        grid[8][8] = rt(grid[8][8]);

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cout << grid[i][j];
            }
            cout << "\n";
        }
    }

    return 0;
}