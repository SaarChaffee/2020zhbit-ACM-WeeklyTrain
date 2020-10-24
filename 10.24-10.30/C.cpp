#include <iostream>
#include <cstring>
using namespace std;

#define MAX 1010
char mapp[MAX][MAX], k;
int dir[4][2] =
    {
        {-1, 0}, {0, 1}, {1, 0}, {0, -1}};
int vis[MAX][MAX];
int n, m;
int flag = 1;

void dfs(int x, int y, int pre_x, int pre_y)
{
    if (!flag)
        return;
    for (int i = 0; i < 4; i++)
    {
        int dx = x + dir[i][0], dy = y + dir[i][1];
        if (mapp[dx][dy] == k && dx >= 0 && dx < n && dy >= 0 && dy < m)
        {
            if (dx == pre_x && dy == pre_y)
                continue;
            else if (vis[dx][dy])
            {
                flag = 0;
                return;
            }
            else if (!vis[dx][dy])
            {
                vis[dx][dy] = 1;
                dfs(dx, dy, x, y);
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> mapp[i];
    for (int i = 0; i < n && flag; i++)
    {
        for (int j = 0; j < m && flag; j++)
        {
            memset(vis, 0, sizeof(vis));
            k = mapp[i][j], vis[i][j] = 1;
            for (int t = 0; t < 4; t++)
            {
                int dx = i + dir[t][0], dy = j + dir[t][1];
                if (mapp[dx][dy] == k && dx >= 0 && dx < n && dy >= 0 && dy < m)
                    dfs(dx, dy, i, j);
            }
        }
    }
    if (!flag)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}