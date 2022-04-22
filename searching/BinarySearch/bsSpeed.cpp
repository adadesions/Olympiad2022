#include <stdio.h>

int bsSpeed(int arr[], int left, int right, int target) {
    int mid = (left + right) / 2;

    if (left <= right) {
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) return bsSpeed(arr, mid+1, right, target);
        else return bsSpeed(arr, left, mid-1, target);
    } else {
        return -1;
    }   
}

int iterBSSpeed(int arr[], int left, int right, int target) {    
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {1, 3, 5 , 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    int result = iterBSSpeed(arr, 0, size-1, target);
    (result != -1)
    ? printf("Found at: %d\n", result)
    : printf("Not found\n");

    return 0;
}