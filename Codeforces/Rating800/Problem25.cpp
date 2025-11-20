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
        string s;
        cin >> s;
        // logic
        int cnt = 0;

        int l = 0;
        int r = n - 1;

        while (l < r && s[l] != s[r])
        {
            cnt += 2;
            l++;
            r--;
        }

        cout << n - cnt << endl;
    }

    return 0;
}
