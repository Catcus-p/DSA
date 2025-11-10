#include <stdio.h>

int main() {
    int n, i, j, k = 0, flag;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n], unique[n];
    
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        
    for(i = 0; i < n; i++) {
        flag = 0;
        for(j = 0; j < k; j++) {
            if(arr[i] == unique[j]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            unique[k++] = arr[i];
    }
    
    printf("\nArray without duplicates: ");
    for(i = 0; i < k; i++)
        printf("%d ", unique[i]);
        
    return 0;
}