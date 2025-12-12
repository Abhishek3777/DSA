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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // logic
        int maxLen = 0;
        sort(a.begin(), a.end());

        int l = 0;
        int r = 0;

        while (r < n - 1)
        {

            // shrink
            if (abs(a[r] - a[r + 1]) > k)
            {
                l = r + 1;
            }
            maxLen = max(maxLen, r - l + 1);
            r++;
        }

        cout << n - maxLen - 1 << endl;
    }

    return 0;
}