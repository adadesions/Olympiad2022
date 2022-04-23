// Given an array of distinct elements. The task is to find triplets in the array whose sum is zero.
        //    #1  #2       #3          
// input: [1, 0, -3, -1, 2]
// output: (1, 0, -1), (1, 2, -3)

// input: [1, -2, 1, 0, 5]
// output: (1, -2, 1)

// input: [1, 2, 3, 5]
// output: No triplets 

// input: [1, -1]
// output: Invalid: dataSize < 3

#include <stdio.h>

int main() {
    // int data[] = {1, 0, -3, -1, 2};
    // int data[] = {1, 2, 3, 4};
    int data[] = {1, -1};
    int size = sizeof(data) / sizeof(data[0]);

    if (size < 3) {
        printf("Invalid: DataSize < 3\n");
        return -1;
    }

    // Begin: d1 = 0, d2 = next from d1, d3 = next
    // END: d1 < size-2, d2 < size-1, d3 < size
    bool isFound = false;
    for (int i=0; i<size-2; i++) {
        for (int j=i+1; j<size-1; j++) {
            for (int k=j+1; k<size; k++) {
                // Check sum is zero
                bool isSumZero = (data[i] + data[j] + data[k]) == 0;
                if (isSumZero) {
                    printf("(%d, %d, %d)\n", data[i], data[j], data[k]);
                    isFound = true;
                }
            }
        }
    }

    if (!isFound) {
        printf("Not Found!\n");
    }
}