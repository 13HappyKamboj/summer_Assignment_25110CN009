#include<stdio.h>
int main(){
    int num, original;

    //Asking the user to enter the number
    printf("Enter the number : ");
    scanf("%d", &num);

    original = num;

    int digit, sum = 0;
    
    //Calculating each digit's cube and adding it to sum
    while(num != 0){
        digit = num % 10;
        sum = sum + (digit*digit*digit);
        num = num / 10;
    }

    if(original == sum){
        printf("%d is a armstrong number.", original);
    }else{
        printf("%d is not a armstrong number.", original);
    }
}