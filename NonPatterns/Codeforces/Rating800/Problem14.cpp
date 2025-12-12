#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        // logic

        if (a == b)
        {
            if (c % 2 == 1)
            {
                cout << "First" << endl;
                continue;
            }
            else
            {
                cout << "Second" << endl;
                continue;
            }
        }
        if (a > b)
            cout << "First" << endl;

        else
            cout << "Second" << endl;
    }

    return 0;
}