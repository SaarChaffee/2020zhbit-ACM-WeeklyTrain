#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define MAX 0x3f3f3f
int dp[MAX];
int main()
{
    int len, n, i = 0, step = 0;
    cin >> len >> n;
    char s[101];
    cin >> s;
    for (int i = 0; i < len; i++)
    {
        dp[i] = MAX;
    }
    dp[1] = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j > n)
                break;
            if (s[i + j] == '1')
                dp[i + j] = min(dp[i + j], dp[i] + 1);
        }
    }
    if (dp[n] == MAX)
        cout << "-1";
    else
        cout << dp[n];
    return 0;
}