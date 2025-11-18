#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        // logic
        if (x != 1)
        {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++)
                cout << 1 << " ";
            cout << endl;

            continue;
        }
        if (k < 2) // 2 needed both for even and odd
        {
            cout << "NO" << endl;
            continue;
        }
        if (n % 2 == 0)
        {
            int cnt = n / 2;
            cout << "YES" << endl;
            cout << cnt << endl;
            for (int i = 0; i < cnt; i++)
                cout << 2 << " ";
            cout << endl;
            continue;
        }
        if (k < 3)
        {
            cout << "NO" << endl;
            continue;
        }
        int evenCnt = (n / 2) - 1;
        vector<int> a;
        for (int i = 0; i < evenCnt; i++)
            a.push_back(2);

        a.push_back(3);

        cout << "YES" << endl;
        cout << a.size() << endl;
        for (int v : a)
            cout << v << " ";
        cout << endl;
    }

    return 0;
}