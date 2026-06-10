#include<stdio.h>
int main(){
    int size, target;

    //Asking the user to enter size of array
    printf("Enter the number of elements : ");
    scanf("%d", &size);

    int arr[size];
    
    //Asking user to enter elements of the array
    printf("Enter elements of array : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    //Asking the user to enter the element to search
    printf("Enter the element to search : ");
    scanf("%d", &target);

    int found = 0;

    //Searching for the respective element
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            printf("Element found at position %d.", i+1);
            found = 1;
            break;
        }
        
    }
    if(found == 0){
        printf("Element not found.");
    }

    return 0;
}