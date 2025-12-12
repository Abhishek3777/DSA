#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // logic

        int maxi = 0;
        maxi = max(maxi, a[0] - 0);
        maxi = max(maxi, 2 * (x - a[n - 1]));

        for (int i = 0; i < n - 1; i++)
            maxi = max(maxi, a[i + 1] - a[i]);

        cout << maxi << endl;
    }

    return 0;
}
