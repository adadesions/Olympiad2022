// Write an efficient C++ program to find smallest and second smallest element in an array (unsorted).

// input: 8, 2, 9, 123, 5, 1
// output: 1, 2
// Comp: O(n)
#include <stdio.h>
int findSmallest(int data[], int size) {
    // small1 is the smallest, small2 is the second
    int small1, small2;
    small1 = small2 = 999999;

    for (int i=0; i<size; i++) {
        if (data[i] < small1) {
            small2 = small1;
            small1 = data[i];
        }

        else if (data[i] != small1 && data[i] < small2) {
            small2 = data[i];
        }
    }

    printf("The smallest: %d\nThe second smallest: %d\n", small1, small2);

    return 0;
}

int main() {
    int data[] = {8, 2, 9, 123, 5, 1};
    int size = sizeof(data) / sizeof(data[0]);

    // TODO: find the smallest and the second smallest
    findSmallest(data, size);
        
    return 0;   
}
