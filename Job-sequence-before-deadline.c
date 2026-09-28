#include <stdio.h>

struct Job {
    char id;
    int deadline;
    int profit;
};

int main() {
    struct Job jobs[] = {
        {'A', 2, 100},
        {'B', 1, 19},
        {'C', 2, 27},
        {'D', 1, 25},
        {'E', 3, 15}
    };

    int n = 5;
    int slot[3] = {0};
    int totalProfit = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (jobs[i].profit < jobs[j].profit) {
                struct Job temp = jobs[i];
                jobs[i] = jobs[j];
                jobs[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = jobs[i].deadline - 1; j >= 0; j--) {
            if (slot[j] == 0) {
                slot[j] = jobs[i].id;
                totalProfit += jobs[i].profit;
                break;
            }
        }
    }

    printf("Scheduled Jobs: ");

    for (int i = 0; i < 3; i++) {
        if (slot[i] != 0)
            printf("%c ", slot[i]);
    }

    printf("\nTotal Profit = %d\n", totalProfit);

    return 0;
}