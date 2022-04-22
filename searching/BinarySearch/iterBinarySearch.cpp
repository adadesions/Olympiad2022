#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 50, 60, 80, 110, 130, 140, 170};
    int target = 110;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, size-1, target);

    printf("===== Iterative Binary Search =====\n");
    (result != -1)
    ? printf("Found at: %d\n", result)
    : printf("Not Found");
}