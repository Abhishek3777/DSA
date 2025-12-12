#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x;
        string s;
        cin >> x >> s;

        // logic
        if (x == s)
        {
            cout << 0 << endl;
            continue;
        }
        bool check = false;
        int ops = 0;

        while (ops <= 5)
        {

            if (x.find(s) != string::npos)
            {
                cout << ops << endl;
                check = true;
                break;
            }
            ops++;
            x += x;
        }

        if (!check)
            cout << -1 << endl;
    }

    return 0;
}