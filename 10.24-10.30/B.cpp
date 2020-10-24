#include <iostream>
#include <cstring>
using namespace std;

#define MAX 1010
char mapp[MAX][MAX];
int dir[4][2] =
    {
        {-1, 0}, {0, 1}, {1, 0}, {0, -1}};
int vis[MAX][MAX];
int n, m, x, y;

int main()
{
    cin >> n >> m;
    memset(mapp, 0, sizeof(mapp));
    memset(vis, 0, sizeof(vis));
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mapp[i][j];
            if (mapp[i][j] == 'W')
                flag = 1;
        }
    }
    for (int i = 0; i < n && flag == 1; i++)
    {
        for (int j = 0; j < m && flag == 1; j++)
        {
            if (mapp[i][j] == 'S')
            {
                for (int k = 0; k < 4; k++)
                {
                    x = i + dir[k][0];
                    y = j + dir[k][1];
                    if (mapp[x][y] == 'W')
                    {
                        flag = 2;
                        break;
                    }
                    if (0 <= x && x < n && 0 <= y && y < m && mapp[x][y] == '.')
                        mapp[x][y] = 'D';
                }
            }
        }
    }
    if (flag == 2)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << mapp[i];
            if (i != n - 1)
                cout << endl;
        }
    }
}