#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers (for qsort)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to find M-th maximum and N-th minimum, and calculate sum and difference
void find_mth_max_nth_min(int arr[], int size, int M, int N) {
    // Check for illegal inputs
    if (M <= 0 || N <= 0 || M > size || N > size) {
        printf("Illegal input\n");
        return;
    }

    // Sort the array
    qsort(arr, size, sizeof(int), compare);

    // Find M-th maximum and N-th minimum
    int mth_max = arr[size - M];
    int nth_min = arr[N - 1];

    // Calculate sum and difference
    int sum = mth_max + nth_min;
    int difference = mth_max - nth_min;

    // Print results
    printf("Sum: %d, Difference: %d\n", sum, difference);
}

int main() {
    // Test cases
    int test1[] = {16, 16, 16, 16, 16};
    int test2[] = {0, 0, 0, 0};
    int test3[] = {-12, -78, -35, -42, -85};
    int test4[] = {15, 19, 34, 56, 12};
    int test5[] = {85, 45, 65, 75, 95};

    printf("Test case a: ");
    find_mth_max_nth_min(test1, 5, 0, 1);

    printf("Test case b: ");
    find_mth_max_nth_min(test2, 4, 1, 2);

    printf("Test case c: ");
    find_mth_max_nth_min(test3, 5, 3, 3);

    printf("Test case d: ");
    find_mth_max_nth_min(test4, 5, 6, -3);

    printf("Test case e: ");
    find_mth_max_nth_min(test5, 5, 5, 2);

    return 0;
}
