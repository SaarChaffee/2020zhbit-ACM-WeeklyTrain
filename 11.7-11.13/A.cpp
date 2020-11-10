#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int dis[510];
    cin >> n;
    while (n--)
    {
        string s;
        memset(dis, 0, sizeof(dis));
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s[i + 1])
                i++;
            else
                dis[s[i]]++;
        }
        for (int i = 'a'; i <= 'z'; i++)
        {
            if (dis[i] > 0)
                cout << char(i);
        }
        cout << endl;
    }
    return 0;
}