#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;
        // logic

        long long sum1 = (k * (k + 1)) / 2;
        long long sum2 = -sum1 + (n * (n + 1)) / 2;

        if (sum1 <= x && x <= sum2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}