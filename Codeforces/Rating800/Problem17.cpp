#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, k;
        cin >> x >> k;
        // logic
        if (x % k != 0)
        {
            cout << 1 << endl;
            cout << x << endl;
            continue;
        }
        else
        {
            cout << 2 << endl;
            cout << x - 1 << " " << 1 << endl;
        }
    }

    return 0;
}