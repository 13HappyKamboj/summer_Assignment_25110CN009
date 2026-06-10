#include<stdio.h>
#include<limits.h>
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

    int largest = arr[0];
    int secondLargest = INT_MIN;

    //Finding the largest element
    for(int i = 0; i < size; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    //Finding the second largest element
    for(int i = 0; i < size; i++){
        if(arr[i] > secondLargest && arr[i] < largest){
            secondLargest = arr[i];
        }
    }

    //Printing the second largest element
    printf("Second largest element is : %d", secondLargest);

    return 0;
}