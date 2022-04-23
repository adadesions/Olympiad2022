#include <stdio.h>

// Recursive version
int binarySearch(int data[], int left, int right, int target) {
    if (left <= right) {
        int mid = (left + right) * 0.5;

        // Found case
        if (data[mid] == target) return mid;

        if (data[mid] < target) {
            //  move left to mid+1
            return binarySearch(data, mid+1, right, target);
        } else {
            // move right to mid-1
            return binarySearch(data, left, mid-1, target);
        }
    }
    return -1;
}

int main() {
    int data[] = {1, 2, 5, 8, 19, 50, 108, 322};
    int size = sizeof(data) / sizeof(data[0]);
    int target = -1;

    // return target's index if notFound return -1
    // Init: left = 0, right = size - 1
    int result = binarySearch(data, 0, size-1, target);
    (result != -1) 
    ? printf("Found at: %d\n", result)
    : printf("Not found\n");
}