#include <stdio.h>

int linearSearch(int data[], int size, int target) {
    for (int i=0; i<size; i++) {
        if (data[i] == target) return i;
    }
    return -1;
}

int main() {
     int data[] = {1, 2, 3, 5, 8, 9, 10, 123, 142};
     int size = sizeof(data) / sizeof(data[0]);
     int target = 9;
     int result = linearSearch(data, size, target);
     (result != -1)
     ? printf("Found at: %d\n", result)
     : printf("Not found\n");

     return 0;
}