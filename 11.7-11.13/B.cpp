#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> m;
        int l = 0, r = 0, f = 0;
        for (int i = 1; i <= m; i++)
        {
            cin >> s;
            int m = s.size();
            if (m % 2)
                f = 1;
            for (int j = 0; j < m; j++)
            {
                if (s[j] == '1')
                    l++;
                else
                    r++;
            }
        }
        if ((l % 2) && (r % 2) && !f)
            m--;
        cout << m << endl;
    }
}
