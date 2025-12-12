#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<string> grid(10);

        for (int i = 0; i < 10; i++)
        {
            cin >> grid[i];
        }

        // logic
        long long sum = 0;
        int n = 10;

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (grid[i][j] != '.')
                {
                    if (j == 0 || j == 9)
                        sum += 1;
                    else if (j == 1 || j == 8)
                        sum += 2;
                    else if (j == 2 || j == 7)
                        sum += 3;
                    else if (j == 3 || j == 6)
                        sum += 4;
                    else if(j == 4 || j == 5)
                        sum += 5;
                }
            }
        }
        cout << sum << endl;
    }

    return 0;
}