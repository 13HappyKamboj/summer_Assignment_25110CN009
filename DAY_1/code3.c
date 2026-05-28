#include<stdio.h>
int main(){
    int num, fact = 1;

    //Asking user to enter the respective number
    printf("Enter the number : ");
    scanf("%d", &num);

    //Calculating Factorial
    for(int i = 1; i <= num; i++){
        fact = fact * i;
    }

    //Print Factorial
    printf("Factorial of %d is : %d", num, fact);

    return 0;


}