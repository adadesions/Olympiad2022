#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

void print(vector<string>& items, vector<int>& weight, vector<int>& cost) {
    printf("Name\t\tWeight\tCost\n");
    for (int i=0; i<items.size(); i++) {
        printf("%s\t\t%d\t%d\n", items[i].c_str(), weight[i], cost[i]);
    }
}

void filter(vector<string>& items, vector<int>& weight, int wGreater, vector<int>& cost, int cGreater) {
    printf("Filter: weight > %d, cost > %d\n", wGreater, cGreater);
    for (int i=0; i<items.size(); i++) {
        if (weight[i] > wGreater && cost[i] > cGreater) {
            printf("%s\t\t%d\t%d\n", items[i].c_str(), weight[i], cost[i]);
        }
    }
}

int main() {
    vector<string> items {"radio", "phone", "camera", "labtop", "fan", "tv"};
    vector<int> weight {4, 1, 5, 10, 10, 15};
    vector<int> cost {300, 100, 230,  510, 703, 32};

    print(items, weight, cost);
    printf("==========\n");
    filter(items, weight, 2, cost, 100);

    return 0;
}