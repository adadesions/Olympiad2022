// Problem 2
// The array-form of an integer num is an array representing its digits in left to right order.
// For example, for num = 1321, the array form is [1,3,2,1].
// Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.

// Example 1:

// Input: num = [1,2,0,0], k = 34
// Output: [1,2,3,4]
// Explanation: 1200 + 34 = 1234
// Example 2:

// Input: num = [2,7,4], k = 181
// Output: [4,5,5]
// Explanation: 274 + 181 = 455
// Example 3:

// Input: num = [2,1,5], k = 806
// Output: [1,0,2,1]
// Explanation: 215 + 806 = 1021
 

// Constraints:
// 1 <= num.length <= 104
// 0 <= num[i] <= 9
// num does not contain any leading zeros except for the zero itself.
// 1 <= k <= 104

#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

void print(vector<int>& data) {
    int counter = 0;
    int size = data.size();Find abc as final answer
    printf("[");
    for (int d : data) {
        if (counter == size-1) {
            printf("%d]\n", d);
            break;
        }
        printf("%d, ", d);
        counter++;
    }
}

vector<int> arrayForm(vector<int>& nums, int k) {
    vector<int> result;

    int carrier = 0;
    reverse(nums.begin(), nums.end());
    
    int i = 0;
    while(i < nums.size() || k > 0 || carrier != 0) {
        int val1 = 0;
        int val2 = 0;

        if (i < nums.size()) {
            val1 = nums[i];
            i++;
        }

        val2 = k % 10;
        k = k / 10;

        int mySum = val1 + val2 + carrier;
        result.push_back(mySum % 10);
        carrier = mySum / 10;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {    
    vector<int> nums {2, 1, 5};
    int k = 806;
    vector<int> result = arrayForm(nums, k);

    print(result);

    return 0;
}
