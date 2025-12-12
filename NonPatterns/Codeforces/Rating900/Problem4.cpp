#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> x(n);
        for (int i = 0; i < n; i++)
            cin >> x[i];
        // logic
        int cnt = 0;
        long long time = b;
        for (int t : x)
        {
            time += min(t, a - 1);
        }
        cout << time << endl;
    }

    return 0;
}