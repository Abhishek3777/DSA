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

        // if already unsorted
        bool check = false;
        for (int i = 0; i < n - 1; i++)
            if (a[i] > a[i + 1])
            {
                check = true;
                break;
            }
            if(check){
                cout << 0 << endl;
                continue;
            }

        int miniDiff = INT_MAX;

        for (int i = 0; i < n - 1; i++)
            miniDiff = min(miniDiff, abs(a[i] - a[i + 1]));

        cout << (miniDiff / 2) + 1 << endl;
    }

    return 0;
}