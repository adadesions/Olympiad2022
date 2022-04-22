#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target)
{
    if (right >= left)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] > target)
            return binarySearch(arr, left, mid - 1, target);
        return binarySearch(arr, mid + 1, right, target);
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 50, 60, 80, 110, 130, 140, 170};
    int target = 110;
    int size = sizeof(arr) / sizeof(arr[0]);

    //  Find target's index by Binary Search
    printf("===== Recursive Binary Search =====\n");
    int result = binarySearch(arr, 0, size-1, target);
    (result != -1)
        ? printf("Found at: %d\n", result)
        : printf("No Found\n");
    
    return 0;
}