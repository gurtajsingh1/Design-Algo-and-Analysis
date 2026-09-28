#include <stdio.h>

int power(int x, int n) {

    if (n == 0)
        return 1;

    int half = power(x, n / 2);

    if (n % 2 == 0)
        return half * half;
    else
        return x * half * half;
}

int main() {

    int x = 2;
    int n = 10;

    int result = power(x, n);

    printf("%d^%d = %d\n", x, n, result);

    return 0;
}