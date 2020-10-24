#include <iostream>
using namespace std;

#define MAX 1010
char mapp[MAX][MAX];
int dir[4][2] =
    {
        {-1, 0}, {0, 1}, {1, 0}, {0, -1}};
int vis[MAX][MAX];
int n, m, x, y;
bool flag1 = false;

void dfs()
{
}
int main()
{
    cin >> n >> m;
    memset(mapp, 0, sizeof(mapp));
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        cin >> mapp[i];
    }
    for (int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            dfs(i,j);
        }
    }
}