#include <bits/stdc++.h>
using namespace std;
int a[0x3f3f3f];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cout << ((n + 1) - a[i]) << ' ';
}