#include <stdio.h>
#include <cmath>

using namespace std;

void hackPassword(int digits, int target) {
    printf("===== Password Genarator =====\n");
    printf("Ada: Hacking...\n");
    int limit = pow(10, digits);
    for (int i=0; i<limit; i++) {
        if (i < 10) printf("000%d, ", i);
        else if (i < 100) printf("00%d, ", i);
        else if (i < 1000) printf("0%d, ", i);
        else printf("%d, ", i);

        if (i == target) {
            printf("=== Found ===: %d\n", i);
            break;
        }
    }
    printf("\n");
    printf("===== Target was Hacked!!! =====");
}

int main() { 
    int targetPassword = 1992;   
    hackPassword(4, 1992);
    return 0;
}