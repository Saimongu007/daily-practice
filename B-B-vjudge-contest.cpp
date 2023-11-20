#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if ((x + y) % 2)
        {
            cout << "-1 -1" << endl;
        }
        else
        {
            cout << x / 2 << " " << (y + 1) / 2 << endl;
        }
    }
}