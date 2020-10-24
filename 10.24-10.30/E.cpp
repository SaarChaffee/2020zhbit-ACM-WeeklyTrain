#include <iostream>
using namespace std;

int pre[101];
struct node
{
    int x, y;
} a[101];

void init(int n)
{
    for (int i = 0; i <= n; i++)
        pre[i] = i;
}

int find(int x)
{
    if (x != pre[x])
        pre[x] = find(pre[x]);
    return pre[x];
}

int main()
{
    int n, px, py;
    cin >> n;
    init(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i].x >> a[i].y;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].x == a[j].x || a[i].y == a[j].y)
            {
                px = find(i);
                py = find(j);
                if (px != py)
                {
                    ans++;
                    pre[py] = px;
                }
            }
        }
    cout << n - 1 - ans;
    return 0;
}