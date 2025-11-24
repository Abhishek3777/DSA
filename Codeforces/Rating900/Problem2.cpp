#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char, int> map;
        for (char c : s)
            map[c]++;

        if (map.size() == 1)
        {
            cout << "Yes" << endl;
            continue;
        }
        int edel = 0;
        // first try to make it an even palindrome
        for (auto it : map)
        {
            if (it.second % 2 != 0)
                edel++;
        }
        // now try if possible to make an odd palindrome
        int odel = 0;
        for (auto it : map)
        {
            if (it.second % 2 != 0)
                odel++;
        }
        if (edel <= k || odel - 1 <= k)
            cout << "Yes" << endl;

        else
            cout << "No" << endl;
    }

    return 0;
}