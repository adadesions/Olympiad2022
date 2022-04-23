// There is an integer array nums sorted in ascending order 
// (with distinct values).
// Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 

// For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// *** You must write an algorithm with O(log n) runtime complexity. ***
// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4

// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1

// Input: nums = [1], target = 0
// Output: -1

#include <stdio.h>
#include <vector>

using namespace std;

int search(vector<int>& data, int target) {
    // Init Step
     int left = 0;
     int right = data.size() - 1;

     while (left <= right) {
         int mid = (left + right) * 0.5;
         if (data[mid] == target) return mid;
        // to Decide to left side
         else if (data[left] <= data[mid]) {
             // data[left] <= target <= data[mid]
            if (target >= data[left] && target < data[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        // to Decide to right side
         } else if (data[mid] <= data[right]) {
            if (target <= data[right] && target >= data[mid]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
         }
     } 
     return -1;
}

int main() {
    vector<int> data{4, 5, 6, 7, 0, 1, 2};    
    int target = 99;
    int result = search(data, target);
    (result != -1)
    ? printf("Found at %d\n", result)
    : printf("Not Found\n");

    return 0;
}