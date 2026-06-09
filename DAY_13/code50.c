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

    int sum = 0;
    float average;

    //Calculating sum of each element of the array
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    //Finding Average
    average = (float)sum/size;

    //Printing sum and average
    printf("Sum : %d\n", sum);
    printf("Average : %.2f", average);

    return 0;
}