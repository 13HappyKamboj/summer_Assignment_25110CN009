#include<stdio.h>
int main(){
    int size;

    //Asking the user to enter size of array
    printf("Enter the number of elements : ");
    scanf("%d", &size);

    int arr[size];
    
    //Asking user to enter elements of the array
    printf("Enter elements of array : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    //Printing each element of the array
    printf("Array elements are : ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}