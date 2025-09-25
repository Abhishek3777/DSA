#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Best/Avg/Worst: O(n²)

// Space: O(1)
// Select Minimums and swap
void selectionSort(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[minIndex])
                minIndex = j;
        }
        swap(nums[minIndex], nums[i]);
    }
}

int main()
{

    vector<int> nums = {5, 2, 1, 3, 4};

    selectionSort(nums);

    for (int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}
