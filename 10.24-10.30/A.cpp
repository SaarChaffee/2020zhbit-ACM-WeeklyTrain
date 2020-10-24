#include <iostream>
#include <string>
#include <cmath>
using namespace std;

#define MAX 0x3f3f3f
int dp[MAX];
char s[MAX];

int main()
{
    int len, n, i = 0, step = 0;
    cin >> len >> n;
    for (int i = 1; i <= len; i++)
    {
        cin >> s[i];
    }
    for (int i = 1; i <= len; i++)
    {
        dp[i] = MAX;
    }
    dp[1] = 0;
    for (int i = 1; i < len; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i + j > len)
                break;
            if (s[i + j] == '1')
                dp[i + j] = min(dp[i + j], dp[i] + 1);
        }
    }
    if (dp[len] == MAX)
        cout << "-1";
    else
        cout << dp[len];
    return 0;
}