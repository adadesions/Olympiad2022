#include <stdio.h>
#include <vector>

using namespace std;

int search(vector<int>& data, int target) {
    int left = 0;
    int right = data.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (data[mid] == target) return mid;
        else if (data[left] <= data[mid]) {
            if (target >= data[left] && target < data[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        } else if (data[mid] <= data[right]) {
            if (target <= data[right] && target > data[mid]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> data{4, 5, 6, 7, 8, 9, 1, 2, 3};
    int size = data.size();
    int target = 6;
    int result = search(data, target);

    (result != -1)
    ? printf("Found at %d\n", result)
    : printf("Not found\n");

    return 0;
}