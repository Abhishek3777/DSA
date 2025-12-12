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
        // check if already beautiful
        bool beau = true;
        long long sum = a[0];
        for (int i = 1; i < n; i++)
        {
            if (sum == a[i])
            {
                beau = false;
                break;
            }
            sum += a[i];
        }
        if (beau)
        {
            cout << "YES" << endl;
            for (int v : a)
            {
                cout << v << " ";
            }
            cout << endl;
            continue;
        }
        // now find maxi and min
        int maxi = *max_element(a.begin(), a.end());
        int mini = *min_element(a.begin(), a.end());

        // means just one element
        if (maxi == mini)
        {
            cout << "NO" << endl;
            continue;
        }
        sort(a.begin(), a.end());

        cout << "YES" << endl;
        cout << maxi << " ";
        for (int i = 0; i < n - 1; i++)
            cout << a[i] << " ";

            cout << endl;
    }

    return 0;
}
