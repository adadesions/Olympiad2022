// Problem 5
// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10,001st prime number?
#include <stdio.h>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    for (int i=2; i< sqrt(n)+1; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int counter = 0;
    int n = 2;

    while (true) {
        if (isPrime(n)) {
            counter++;
        }

        if (counter == 1000001) {
            printf("10001st prime number is %d\n", n);
            break;
        }
        n++;
    }

    return 0;
}