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

    int num, count = 0;

    //Asking the user to enter the element to find frequency for
    printf("Enter the element to find frequency : ");
    scanf("%d", &num);

    //Finding frequency for the respective element
    for(int i = 0; i < size; i++){
        if(arr[i] == num){
            count++;
        }
    }

    //Printing the frequency
    printf("Frequency of %d is %d.", num, count);

    return 0;
}