#include <bits/stdc++.h>

using namespace std;

using LLI = long long int;
#define all(a) a.begin(), a.end()

template <typename T>
void take(T &a)
{
    cin >> a;
}
template <typename T>
void take(T &a, T &b) { cin >> a >> b; }
template <typename T>
void take(T &a, T &b, T &c) { cin >> a >> b >> c; }

#define printans(ans) cout << ans;

int matrix[1000][1000];
int visit[1000][1000];
int n, m;

void dfs(int x, int y, int &s)
{
    if(x < 0 || y < 0 || x >= n || y >= m) return;

    if(visit[x][y] || matrix[x][y] == 0) return;

    visit[x][y] = 1;
    s += matrix[x][y]; 

    dfs(x + 1, y, s);
    dfs(x, y + 1, s);
    dfs(x - 1, y, s);
    dfs(x, y - 1, s);

    return;
}

// S@ndip : Shree Ganeshay Namah 
// https://codeforces.com/problemset/problem/1829/E
// DFS on Grid

int main()
{

    int t;
    take(t);

    while (t--)
    {
        take(n, m);

        memset(visit, -1, sizeof(visit));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
                visit[i][j] = 0;
            }
        }
        
        int ans = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (visit[i][j] == 0 && visit[i][j] != -1 && matrix[i][j] != 0)
                {
                    dfs(i, j, sum);
                    // cout << ans << " ";
                    ans = max(ans, sum);
                    sum = 0;
                }
            }
        }

        printans(ans );
        cout << "\n";
    }
    return 0;
}
