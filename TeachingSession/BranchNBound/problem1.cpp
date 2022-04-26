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
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

struct Item {
    float weight;
    int value;
};

struct Node {
    float weight;
    int level;
    int profit;
    int bound;
};

bool compare(Item m, Item n) {    
    float ratio1 = (float)m.value / m.weight; // Casting to float
    float ratio2 = (float)n.value / n.weight;

    return ratio1 > ratio2;
}

int calBound(Node next, int size, int W, Item data[]) {
    if (next.weight >= W) {
        return 0;
    }

    int profitBound = next.bound;
    int idx = next.level + 1;
    int totalWeight = next.weight;

    // idx < treeHeight and totalWeight <= W
    int predictWeight = totalWeight + data[idx].weight;
    while (idx < size && predictWeight <= W) {        
        totalWeight = predictWeight;
        profitBound += data[idx].value;

        // Update value for loop conditions
        predictWeight = totalWeight + data[idx].weight;
        idx++;
    }

    // If data[idx] is not a leaf node, then update it profit
    if (idx < size) {
        float ratio = data[idx].value / data[idx].weight;
        profitBound += (W - totalWeight) * ratio;
    }

    return profitBound;
}

int knapsack(Item data[], int W, int size) { 
    // Step 1
    sort(data, data + size, compare);

    // Step 2
    int maxProfit = 0;

    // Step 3
    queue<Node> Q;
    Node u, next;

    // Step 4
    u.level = -1;
    u.profit = 0;
    u.weight = 0;
    Q.push(u);

    // Step 5 ^^
    while (!Q.empty()) {
        u = Q.front();
        Q.pop();

        // ROOT NODE case
        // Change dummy node to Root node
        if (u.level == -1) next.level = 0;

        // LEAF NODE case
        // Check is reach leaf level
        if (u.level == size-1) continue;

        // INTER NODE case
        next.level = u.level + 1;
        next.profit = u.profit + data[next.level].value;
        next.weight = u.weight + data[next.level].weight;

        // Knapnack Condition, W is Knapsace capacity
        if (next.weight < W && next.profit > maxProfit)
            maxProfit = next.profit;
        
        // Compute Bound for next level node
        next.bound = calBound(next, size, W, data);


    }

    return 0;
}

int main() {
    Item data[] = {{2, 40}, {3.14, 50}, {1.98, 100}, {5, 95}, {3, 30}};
    int W = 10;

    // Sizeof 64 bytes / 8 bytes = 8 items
    int size = sizeof(data) / sizeof(data[0]);

    int maxProfit = knapsack(data, W, size);
    printf("Maximum profit is %d\n", maxProfit);

    return 0;
}