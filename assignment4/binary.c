#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  // Prevent overflow
        if (arr[mid] == target)
            return mid;  // Element found
        else if (arr[mid] < target)
            low = mid + 1;  // Search right half
        else
            high = mid - 1; // Search left half
    }
    return -1;  // Element not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    int result = binarySearch(arr, n, target);

    if(result != -1)
        printf("Binary Search: Element found at index %d\n", result);
    else
        printf("Binary Search: Element not found\n");

    return 0;
}