#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int t = 50;

    int low = 0;
    int high = n - 1;
    int found = 0;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (a[mid] == t) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }
        else if (t < a[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (found == 0)
        printf("Element not found\n");

    return 0;
}