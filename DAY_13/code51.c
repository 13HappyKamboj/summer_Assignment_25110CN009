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

    int max = arr[0], min = arr[0];

    //Finding largest number
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    //Finding smallest number
    for(int i = 1; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    //Printing largest and smallest element
    printf("Largest Element : %d\n", max);
    printf("Smallest Element : %d", min);

    return 0;
}
