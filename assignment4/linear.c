#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            return i;  // Element found
    }
    return -1;  // Element not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    int result = linearSearch(arr, n, target);

    if(result != -1)
        printf("Linear Search: Element found at index %d\n", result);
    else
        printf("Linear Search: Element not found\n");

    return 0;
}