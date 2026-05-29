#include<stdio.h>
int main(){
    int num;

    //Asking the user to enter the number
    printf("Enter the number : ");
    scanf("%d", &num);

    int digit, sum = 0;

    //Calculating Sum of Digits
    while(num != 0){
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }

    //Printing Sum of Digits
    printf("Sum of digits : %d", sum);

    return 0;
}