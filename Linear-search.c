#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int n = 5;
    int t = 30;
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == t) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("Element not found\n");

    return 0;
}