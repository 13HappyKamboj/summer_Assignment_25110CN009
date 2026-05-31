#include<stdio.h>
int main(){
    int num1, num2, digit, sum, original;

    //Asking the user to enter the range
    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);

    //Verifying Armstrong number condition
    for(int i = num1; i <= num2; i++){
        original = i;
        sum = 0;

        while(original != 0){
            digit = original % 10;
            sum += digit*digit*digit;
            original = original / 10;
        }

    //We didn't wrote sum == original because original becomes zero after the while statement
        if(sum == i){
            printf("%d ", i);
        }
    }

    return 0;
}