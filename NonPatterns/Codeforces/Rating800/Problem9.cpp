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
        vector<int> a(n - 1);
        for (int i = 0; i < n - 1; i++)
            cin >> a[i];

        // logic
        long long sum = 0;
        for (int num : a)
            sum += num;

        cout << -sum << endl;
    }

    return 0;
}