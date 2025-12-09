#include<stdio.h>
#include<stdlib.h>
int linerSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return i; 
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    printf("enter the element");
    scanf("%d", &target);
    int result = linerSearch(arr, n, target);
    if (result ==-1){
        printf("element not found ");}
        else{
    printf("element found ", result);
        }
    }
