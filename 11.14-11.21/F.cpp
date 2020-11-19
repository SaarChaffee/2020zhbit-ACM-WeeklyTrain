#include <bits/stdc++.h>
using namespace std;

#define MAX 0x3f3f3f
int num[MAX];
bool vis[MAX];

int main()
{
    memset(num, 0, sizeof(num));
    memset(vis, 0, sizeof(vis));
    num[0] = 1, num[1] = 1;
    int n;
    cin >> n;
    for (int i = 2;; i++)
    {
        num[i] = num[i - 1] + num[i - 2];
        vis[num[i]] = true;
        if (num[i] > 3000)
            break;
    }
    vis[1] = true;
    for (int i = 1; i <= n; i++)
        if (vis[i])
            cout << "O";
        else
            cout << "o";
    return 0;
}