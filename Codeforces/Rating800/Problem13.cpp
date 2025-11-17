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
        vector<int> b;
        vector<int> c;

        unordered_map<int, int> map;
        for (int n : a)
            map[n]++;

        if (map.size() == 1)
        {
            cout << -1 << endl;
            continue;
        }
        long long maxi = *max_element(a.begin(), a.end());

        for (int i = 0; i < map[maxi]; i++)
            c.push_back(maxi);

        for (int n : a)
            if (n != maxi)
                b.push_back(n);

        cout << b.size() << " " << c.size() << endl;
        for (int i = 0; i < b.size(); i++)
            cout << b[i] << " ";

        for (int i = 0; i < c.size(); i++)
            cout << c[i] << " ";

        cout << endl;
    }

    return 0;
}