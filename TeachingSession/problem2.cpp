// Write an efficient C++ program to find smallest and second smallest element in an array (unsorted).

// input: 8, 2, 9, 123, 5, 1
// output: 1, 2
// Comp: O(n*m)
#include <stdio.h>
int findSmallest(int data[], int size) {
    int min = 999999;
    int idxMin = 0;
    for (int i=0; i<size; i++) {
        if (data[i] < min) {
            min = data[i];
            idxMin = i;
        }
    }
    data[idxMin] = 999999;
    return min;
}

int main() {
    int data[] = {8, 2, 9, 123, 5, 1};
    int size = sizeof(data) / sizeof(data[0]);

    // find the smallest
    int smallest = findSmallest(data, size);
    printf("The smallest: %d\n", smallest);
    
    // Foreach 
    // for (int d : data) {
    //     printf("%d, ", d);
    // }
     
    // find the 2nd smallest
    int secSmall = findSmallest(data, size);
    printf("The second smallest: %d\n", secSmall);

    return 0;   
}
