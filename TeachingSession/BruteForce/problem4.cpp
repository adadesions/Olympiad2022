// Problem 4
// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
// a^2 + b^2 = c^2
// For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

// "There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc."

#include <stdio.h>
#include <cmath>

using namespace std;

int main() {
    // Brute force: pythagorean triplet^^; a <= 500, b <= 500
    int a, b, c;
    for (a = 1; a <= 500; a++) {
        for (b = 1; b <= 500; b++) {
            c = 1000 - a - b;
            int aa = a*a;
            int bb = b*b;
            int cc = c*c;

            if (aa+bb == cc && a < b) {
                printf("a = %d, b = %d, c = %d\n", a, b, c);
                
                // Find abc as final answer/
                printf("abc = %d\n", a*b*c);
            }
        }
    }
    return 0;
}