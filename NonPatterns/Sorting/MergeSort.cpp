#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

// TC - O(n) best/avg/worst 
// SC - O(n) extra temp array and O(log n) for recursive stack space
void merge(vector<int> &nums, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (nums[left] <= nums[right])
        {
            temp.push_back(nums[left++]);
        }
        else
            temp.push_back(nums[right++]);
    }
    while (left <= mid)
        temp.push_back(nums[left++]);

    while (right <= high)
        temp.push_back(nums[right++]);

    // copy entire temp into nums
    int k = 0;
    for (int i = low; i <= high; i++)
        nums[i] = temp[k++];
}

void mergeSort(vector<int> &nums, int left, int right)
{
    if (left >= right)
        return;
    int mid = left + (right - left) / 2;
    mergeSort(nums, left, mid);
    mergeSort(nums, mid + 1, right);
    merge(nums, left, mid, right);
}

int main()
{
    vector<int> nums = {5, 4, 3, 2, 1};
    int n = nums.size();

    cout << "Array before sorting" << endl;
    for (int num : nums)
        cout << num << " ";
    cout << endl;

    mergeSort(nums, 0, n - 1);

    cout << "Array after sorting" << endl;
    for (int num : nums)
        cout << num << " ";

    return 0;
}