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
        int cnt = 0;
        int maxi = 0;

        for (int v : a)
        {
            if (v == 0)
                cnt++;
            else
                cnt = 0;
            maxi = max(maxi, cnt);
        }

        cout << maxi << endl;
    }

    return 0;
}
