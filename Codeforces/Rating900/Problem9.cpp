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

        unordered_map<int, int> map;
        for (int i = 0; i < n; i++)
            map[i + 1] = i;
        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, abs(i - map[a[i]]));
        }
        cout << maxi << endl;
    }

    return 0;
}