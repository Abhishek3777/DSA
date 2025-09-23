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

