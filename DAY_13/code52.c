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
    
    int even = 0, odd = 0;

    //Counting odd and even elements
    for(int i  = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    //Printing count of even and odd elements
    printf("Total even elements are : %d\n", even);
    printf("Total odd elements are : %d\n", odd);

    return 0;
}