// Problem 3
// Given an array where all elements appear even number of times except one. All repeating occurrences of elements appear in pairs and these pairs are not adjacent (there cannot be more than two consecutive occurrences of any element). 

// Find the element that appears odd number of times. Note that input like {2, 2, 1, 2, 2, 1, 1} is valid as all repeating occurrences occur in pairs and these pairs are not adjacent. Input like {2, 1, 2} is invalid as repeating elements don’t appear in pairs. Also, input like 
// {1, 2, 2, 2, 2} is invalid as two pairs of 2 are adjacent. Input like {2, 2, 2, 1} is also invalid as there are three consecutive occurrences of 2.

//                 0  1  2  3  4  5  6  7   8  9 10  11  12  13  14
// Input: arr[] = {1, 1, 2, 2, 1, 1, 2, 2, 13, 1, 1, 40, 40, 13, 13}
// Output: 13

// Input: arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4}
// Output: 3

// O(log n) time

#include <stdio.h>
#include <vector>

using namespace std;

int search(vector<int>& data, int left, int right) {
    // Base case, Halting case
    if (left > right) return -1;

    // Found the element
    if (left == right) return data[left];

    int mid = (left + right) * 0.5;
    // Even index case
    if (mid % 2 == 0) {
        if (data[mid] == data[mid+1]) {
            return search(data, mid+2, right);
        } else {
            return search(data, left, mid);
        }
    // Odd index case
    } else {
        if (data[mid] == data[mid+1]) {
            return search(data, left, mid-1);
        } else {
            return search(data, mid+1, right);
        }
    }
}

int main() {                      
    vector<int> data {1, 1, 2, 2, 1, 1, 2, 2, 13, 1, 1, 40, 40, 13, 13};
    int result = search(data, 0, data.size()-1);
    (result != -1)
    ? printf("The Elements is %d\n", result)
    : printf("Notihng!\n");

    return 0;
}