#include<stdio.h>
int main(){
    int num;

    //Asking the user to enter the number
    printf("Enter the number : ");
    scanf("%d", &num);

    int digit, product = 1;

    //Calculating Product Of Digits
    while(num != 0){
        digit = num % 10;
        product = product * digit;
        num = num / 10;
    }

    //Printing Product Of Digits
    printf("Product of digits : %d", product);

    return 0;

}