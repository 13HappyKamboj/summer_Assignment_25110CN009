#include<stdio.h>
int main(){
    int num;

    //Asking the user to enter the number
    printf("Enter number to reverse : ");
    scanf("%d", &num);

    int digit, reverse = 0;

    //Reversing the entered number
    while(num != 0){
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    //Printing the reversed number
    printf("Reversed Number : %d", reverse);

    return 0;
}