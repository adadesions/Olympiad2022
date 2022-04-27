// Input:
// First thing in every pair is weight of item
// and second thing is value of item
// Item arr[] = {{2, 40}, {3.14, 50}, {1.98, 100},
//               {5, 95}, {3, 30}};
// Knapsack Capacity W = 10

// Output:
// The maximum possible profit = 235

#include <stdio.h>
#include <vector>
#include <string>
#include <queue>

using namespace std;

struct Item {
    float weight;
    int value;
};

struct Node {
    int level, profit, bound;
    float weight;
};

int Item:size() {

}

int main() {
    Item items[] = {{2, 40}, {3.14, 50}, {1.98, 100}, {5, 95}, {3, 30}};
    int W = 10;


    // Print all items
    for(auto d : items) {
            printf("w: %.2f, v: %d\n", d.weight, d.value);
    }
    return 0;
}