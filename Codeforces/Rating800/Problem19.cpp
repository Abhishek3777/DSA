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

        vector<int> b(n, 0);
        b[0] = 1;

        int mini = 1;
        unordered_set<int> used;
        used.insert(1);

        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] + b[i - 1] <= a[i])
            {
                b[i] = ++mini;
                used.insert(b[i]);
            }
            else
            {
                int temp = a[i - 1] + b[i - 1] - a[i];

                for (int j = temp; j <= n; j++)
                {
                    if (!used.count(j))
                    {
                        used.insert(j);
                        b[i] = j;
                        break;
                    }
                }
            }
        }

        for (int v : b)
            cout << v << " ";
        cout << endl;
    }

    return 0;
}
