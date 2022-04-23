// Problem 1
// You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in the list. One of the integers is missing in the list. Write an efficient code to find the missing integer.

// input: {1, 2, 4, 5, 6, 7}, n = 7
// output: 3

// Hint:
// sum = 1, 2, 3, 4, 5, 6, 7 
// mySum = 1, 2, 4, 5, 6, 7

#include <stdio.h>

int main() {
    int data[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(data) / sizeof(data[0]);
    int n = 7;

    // sum = n*(n+1)/2; O(1)
    int sum = n * (n+1)* 0.5;
    int mySum = 0;

    for (int i=0; i<size; i++) {
        mySum += data[i];
    }

    int missingNum = sum - mySum;
    printf("The missing number is %d\n", missingNum);
    
    return 0;
}