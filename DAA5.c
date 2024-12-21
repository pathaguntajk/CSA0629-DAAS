#include <stdio.h>

void sumOfSubsets(int s[], int n, int sum, int currSum, int level, int visited[]) {
    if (currSum == sum) {
        printf("Subset is (");
        for (int i = 0; i < n; i++) {
            if (visited[i]) {
                printf("%d ", s[i]);
            }
        }
        printf(")\n");
        return;
    }

    if (level == n || currSum > sum) {
        return;
    }

    // Include the current element
    visited[level] = 1;
    sumOfSubsets(s, n, sum, currSum + s[level], level + 1, visited);

    // Exclude the current element
    visited[level] = 0;
    sumOfSubsets(s, n, sum, currSum, level + 1, visited);
}

int main() {
    int s[] = {6, 2, 8, 1, 5};
    int n = sizeof(s) / sizeof(s[0]);
    int sum = 9;
    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    sumOfSubsets(s, n, sum, 0, 0, visited);

    return 0;
}