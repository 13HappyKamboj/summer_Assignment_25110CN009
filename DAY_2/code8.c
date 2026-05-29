#include<stdio.h>
int main(){
    int num;

    //Asking the user to enter the number
    printf("Enter number : ");
    scanf("%d", &num);

    int original = num;

    int digit, reverse = 0;

    //Finding Reverse of the entered number
    while(num != 0){
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    //Checking Palindrome Condition
    if(original == reverse){
        printf("Number is Palindrome.");
    } else{
        printf("Number is not Palindrome.");
    }

    return 0;
}