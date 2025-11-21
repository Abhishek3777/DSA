#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // logic
        int ops = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if ((a[i] % 2 == 0 && a[i + 1] % 2 == 0) ||
                (a[i] % 2 != 0 && a[i + 1] % 2 != 0))
            {
                a[i + 1] = a[i] * a[i + 1];
                ops++;
            }
        }

        cout << ops << endl;
    }

    return 0;
}
