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
        unordered_map<int, int> map;
        for (int num : a)
            map[num]++;

        if (map.find(k) != map.end())
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}