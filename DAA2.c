#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == key)
            return mid; // Key found, return index
        
        if (arr[mid] < key)
            left = mid + 1; // Search right half
        else
            right = mid - 1; // Search left half
    }
    return -1; // Key not found
}

int main() {
    // Test Case 1
    int arr1[] = {-11, 4, 5, 10, 20, 23, 45, 50};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int key1 = 5;

    int result1 = binarySearch(arr1, size1, key1);
    if (result1 != -1)
        printf("Key %d found at position %d\n", key1, result1);
    else
        printf("Key %d not found\n", key1);

    // Test Case 2
    int arr2[] = {-2, 0, 3, 6, 8, 8, 10, 11};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int key2 = 2;

    int result2 = binarySearch(arr2, size2, key2);
    if (result2 != -1)
        printf("Key %d found at position %d\n", key2, result2);
    else
        printf("Key %d not found\n", key2);

    return 0;
}
