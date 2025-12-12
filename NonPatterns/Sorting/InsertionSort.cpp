// 👉 Efficient for small or nearly sorted arrays.
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// takes an element and places it at its correct position
void insertionSort(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && nums[j - 1] > nums[j])
        {
            int temp = nums[j - 1];
            nums[j - 1] = nums[j];
            nums[j] = temp;
            j--;
        }
    }
}

int main()
{

    vector<int> nums = {5, 2, 1, 3, 4};

    insertionSort(nums);

    for (int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}