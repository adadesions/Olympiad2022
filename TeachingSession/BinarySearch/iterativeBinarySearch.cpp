// Binary Search
// Iterative version
#include <stdio.h>

int iterBinarySearch(int data[], int left, int right, int target) {
    while (left <= right) {
        int mid = (left + right) * 0.5;
        
        // Match or Found
        if (data[mid] == target)
            return mid;

        // Shift case
        if (data[mid] < target)
            left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}

int main() {
    int data[] = {1, 2, 5, 8, 19, 50, 108, 322};
    int size = sizeof(data) / sizeof(data[0]);
    int target = 108;

    // return target's index if notFound return -1
    // Init: left = 0, right = size - 1
    int result = iterBinarySearch(data, 0, size-1, target);
    (result != -1) 
    ? printf("Found at: %d\n", result)
    : printf("Not found\n");
}