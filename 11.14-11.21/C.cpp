#include <bits/stdc++.h>
using namespace std;
#define MAX 0x3f3f3f
int a[MAX];
int ans[MAX];

int f(int stdd, int now, int next, int step)
{
    if (stdd == next)
        return ans[now] = step;
    return ans[now] = f(stdd, next, a[next], step + 1);
}

int main()
{
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        memset(a, 0, sizeof(a));
        memset(ans, 0, sizeof(ans));
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
        {
            if (ans[i] == 0)
            {
                f(i, i, a[i], 1);
            }
        }
        for (int i = 1; i < n; i++)
            cout << ans[i] << " ";
        cout << ans[n] << endl;
    }
    return 0;
}