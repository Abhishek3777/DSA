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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // logic
        long long total = 0;
        for (int v : a)
        {
            if (v == 2)
                total++;
        }
        if (total == 0)
        {
            cout << 1 << endl;
            continue;
        }

        bool check = false;
        long long curr = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == 2)
                curr++;
            if (curr == total - curr)
            {
                cout << i + 1 << endl;
                check = true;
                break;
            }
        }
        if (!check)
            cout << -1 << endl;
    }

    return 0;
}
