#include <stdio.h>
// Linear Search O(n)

int search(int data[],int size, int target) {
    int result = 0;
    for (int i=0; i<size; i++) {
        if (data[i] == target) return i;
    }
    return -1;
}

int main() {
    int data[] = {1, 2, 3, 4, 8 ,9, 10, 99, 108};
    int size = sizeof(data) / sizeof(data[0]);
    int target = 1000;

    // return index of the target
    // if not found return -1
    int result = search(data, size, target);
    (result != -1 )
    ? printf("Found at:  %d\n", result)
    : printf("Not found\n");

    return 0;
}
