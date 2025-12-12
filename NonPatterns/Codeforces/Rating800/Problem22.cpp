#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        // logic
        bool check = false;

        if (n % 2 == 0)
        {
            cout << "Yes" << endl;
            check = true;
            continue;
        }
        else
        {
            if (k % 2 == 0)
            {
                cout << "No" << endl;
                continue;
            }
            else
                cout << "Yes" << endl;
        }
    }

    return 0;
}
