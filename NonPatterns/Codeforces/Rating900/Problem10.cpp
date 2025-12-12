#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        // calculating total sum and prefix, suffix array
        long long totalSum = 0;

        vector<long long> prefix(n + 1, 0);

        
        for (int i = 1; i <= n; i++)
            prefix[i] = prefix[i - 1] + a[i];

        totalSum = prefix[n];

        for (int i = 0; i < q; i++)
        {
            int l, r, k;
            cin >> l >> r >> k;

            long long sum = totalSum;
            long long left = l >= 2 ? prefix[l - 1] : 0;
            long long right = prefix[r];
            long long segment = right - left;
            sum -= segment;
            sum += 1LL * (r - l + 1) * k;

            if (sum % 2 == 1)
                cout << "Yes" << endl;

            else
                cout << "No" << endl;
        }
    }

    return 0;
}