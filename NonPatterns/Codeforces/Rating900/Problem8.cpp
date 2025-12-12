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

        int maxi1 = 0;
        int maxi2 = 0;

        int curr = 0;
        for (char c : s)
        {
            if (c == '<')
                curr++;
            else
                curr = 0;
            maxi1 = max(maxi1, curr);
        }
        curr = 0;
        for (char c : s)
        {
            if (c == '>')
                curr++;
            else
                curr = 0;
            maxi2 = max(maxi2, curr);
        }
        cout << max(maxi1, maxi2) + 1 << endl;
    }

    return 0;
}