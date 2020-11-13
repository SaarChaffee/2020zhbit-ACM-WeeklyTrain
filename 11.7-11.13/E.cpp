#include <iostream>
using namespace std;

int main()
{
    int n, x, m, t, T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n >> x;
        t = n - 2;
        for (m = 1; t > 0; m++)
        {
            t = t - x;
        }
        cout << m << endl;
    }
    return 0;
}