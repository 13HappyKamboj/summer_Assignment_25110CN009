#include<stdio.h>
int main(){
    int num, digit, fact, sum = 0;

    //Asking the user to enter a number
    printf("Enter a number : ");
    scanf("%d", &num);

    int original = num;

    //Adding factorial of each digit to sum
    while(original != 0){
        digit = original % 10;
        fact = 1;

        for(int i = 1; i <= digit; i++){
            fact = fact * i;
        }

        sum = sum + fact;
        original = original / 10;
    }

    //Checking and displaying whether a number is strong or not.
    if (sum == num)
        printf("%d is a Strong Number.", num);
    else
        printf("%d is not a Strong Number.", num);

    return 0;
}