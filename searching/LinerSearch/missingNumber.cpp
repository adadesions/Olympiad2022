#include <stdio.h>
#include <vector>

using namespace std;

int MissingNumber(vector<int>& array, int n) {
    int sum = n*(n+1)*0.5;
    int loopSum = 0;
    for (int i=0; i<array.size(); i++)
        loopSum += array[i];
    printf("Sum: %d, loopSum: %d\n", sum, loopSum);
    return sum - loopSum;
}

int main() {
    vector<int> data{2, 3, 4, 1, 6, 7};    
    int n = 7;
    int result = MissingNumber(data, n);

    printf("Missing number = %d\n", result);
}