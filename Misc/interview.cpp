#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // missing number 1 to n range, one missing
    vector<int> nums = {3, 0, 1};
    int xorAll = 0;

    for (int i = 0; i <= nums.size(); i++)
        xorAll ^= i;

    for (int num : nums)
    {
        xorAll ^= num;
    }
    cout << xorAll << endl;

    return 0;
}