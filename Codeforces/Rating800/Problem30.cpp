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
        // logic
        int count = 0;
        if (n < 10)
            count = n;

        else
        {
            while (n > 10)
            {
                count += 9;
                n /= 10;
            }
            count += n;
        }
        cout << count << endl;
    }

    return 0;
}
