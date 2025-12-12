#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // logic
    for (int num : a)
        if (num == 0)
        {
            cout << 0 << endl;
            return 0;
        }

    int miniDist = INT_MAX;
    for (int num : a)
    {
        miniDist = min(miniDist, abs(num - 0));
    }
    cout << miniDist << endl;

    return 0;
}