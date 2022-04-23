// Write an efficient program for printing k largest elements in an array. Elements in an array can be in any order. 

// For example, if the given array is [1, 23, 12, 9, 30, 2, 50] and you are asked for the largest 3 elements i.e., k = 3 then your program should print 50, 30, and 23.

// Input: [1, 23, 12, 9, 30, 2, 50], k = 3
// Output: 50, 30, 23

// Input: [1, 23, 12, 9, 30, 2, 50], k = 4
// Output: 50, 30, 23, 12

// Input: [1, 23, 12, 9, 30, 2, 50], k = -1
// Output: Invalid

// Input: [1], k = 3
// Output: Not enough data (data size < k)

// Input: [1, 23, 12], k = 10
// Output: Not enough data (data size < k)
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
    int k = 4;
    // Normal Case
    int data[] = {1, 23, 12, 9, 30, 2, 50};    
    int size = sizeof(data) / sizeof(data[0]);

    // Empty Case
    int dataEmp[] = {};
    int sizeEmp = sizeof(dataEmp) / sizeof(dataEmp[0]);

    // k <= 0 Case
    if (k <= 0) {
        printf("Invalid: k <= 0\n");
        return -1;
    }

    // size = 0 Case
    if (size == 0) {
        printf("Invalid: size = 0\n");
        return -1;
    }

    // k > size Case
    if (k > size) {
        printf("Invalid: k > dataSize\n");
        return -1;
    }

    sort(data, data+size, greater<int>());

    for (int d : data) {
        printf("%d, ", d);
    }

    printf("\n");
    printf("K largests: ");
    for (int i=0; i<k; i++) {
        // Normal Case
        printf("%d, ", data[i]);
    }
    printf("\n");

    return 0;
}