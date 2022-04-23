// Problem 1
// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
// You must write an algorithm with O(log n) runtime complexity.

// Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4

// Input: nums = [-1,0,3,5,9,12], target = 2
// Output: -1

#include <stdio.h>
int search(int data[], int left, int right, int target) {
    while(left <= right) {
        int mid = (left + right) / 2;
        if (data[mid] == target) return mid;

        if (data[mid] < target) left = mid + 1;
        else right = mid - 1 ;
    }
    return -1;
}

int main() {
    int data[] = {-1, 0, 3, 5, 9, 12};
    int size = sizeof(data) / sizeof(data[0]);
    int target = 9;
    
    int result = search(data, 0, size-1, target);
    (result != -1)
    ? printf("Found at %d\n", result)
    : printf("Not Found");
}