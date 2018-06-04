#include <stdio.h>

#define MAX_NUMBER 13

int f(int n) {
    // reference: https://en.wikipedia.org/wiki/Fibonacci_number

    // this returns are set because this cases not pass to form fibonacci sequence.
    if (n == 0) return 0;
    if (n == 1) return 1;

    return f(n-1) + f(n-2);
}

int main() {
    for(int n = 0; n < MAX_NUMBER; n++)
        printf("%d ", f(n));

    return 0;
}
