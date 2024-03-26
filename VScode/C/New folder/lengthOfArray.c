/*
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    printf("%d",sizeof(arr)/sizeof(arr[0]));
    return 0;
}
*/
#include <stdio.h>
 
// Function to traverse and print the array
void printArray(int* arr, int n)
{
    int i;
 
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}