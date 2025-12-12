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
        int cnt1 = 0;
        int cnt2 = 0;
        for (int v : a)
        {
            if (v == 1)
                cnt1++;
            else
                cnt2++;
        }
    
        int ops = 0;

        while (cnt1 < cnt2 || cnt2 % 2 == 1)
        {
            cnt1++;
            cnt2--;
            ops++;
        }
        cout << ops << endl;
    }

    return 0;
}