#include <stdio.h>

int main() {
    int n, i, max, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    max = min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    
    printf("\nMaximum: %d", max);
    printf("\nMinimum: %d", min);
    
    return 0;
}