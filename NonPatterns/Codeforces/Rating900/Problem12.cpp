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
        if(a.size() == 1){
            cout << 0 << endl;
            continue;
        }
        int maxi = (a[n - 1] - a[0]);

        // if consecutive then, at some rotation point they'lll come at first and last
        for (int i = 0; i < n - 1; i++)
            maxi = max(maxi, (a[i] - a[i + 1]));

        // if not consective either the maximum can be brought to a[n] or
        // minimum to a[0]
        int maxN = *max_element(a.begin(), a.end());
        int miniN = *min_element(a.begin(), a.end());
        maxi = max(maxi, maxN - a[0]);

        maxi = max(maxi, a[n - 1] - miniN);

        cout << maxi << endl;
    }

    return 0;
}