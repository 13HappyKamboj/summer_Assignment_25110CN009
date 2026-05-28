#include<stdio.h>
int main(){
    int num;

    //Asking the user to enter Nth number
    printf("Enter the Nth number : ");
    scanf("%d", &num);

    int sum = 0;

    //Calculating Sum
    for(int i = 1; i <= num; i++){
        sum = sum + i;
    }

    //Print Sum
    printf("Sum of the first %d natural numbers : %d", num, sum);

    return 0;
    
}