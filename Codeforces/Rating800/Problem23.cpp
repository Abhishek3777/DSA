#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        // logic

        if (d < b)
        {
            cout << -1 << endl;
            continue;
        }

        int y_moves = 0;
        int x_moves = 0;

        // correcting y first
        y_moves += abs(b - d);
        a += y_moves;

        if (a < c)
        {
            cout << -1 << endl;
        }

        x_moves += abs(a - c);

        cout << y_moves + x_moves << endl;
    }

    return 0;
}
