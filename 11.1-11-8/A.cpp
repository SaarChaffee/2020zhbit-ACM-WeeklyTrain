#include <iostream>
using namespace std;
int main()
{
    int i, j, a[4], sum = 0;
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    for (i = 0; i < 4; i++)
    {
        sum += a[i];
    }
    bool flag = false;
    for (i = 0; i < 4; i++)
        if (a[i] * 2 == sum)
            flag = true;
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
            if ((a[i] + a[j]) * 2 == sum)
                flag = true;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
