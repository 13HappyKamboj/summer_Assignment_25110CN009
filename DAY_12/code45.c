#include<stdio.h>

//Function for Palindrome Number.
int palindromeNum(int x){
    int original = x, digit, reverse = 0;

    while(x != 0){
        digit = x % 10;
        reverse = reverse * 10 + digit;
        x = x/10;
    }

    if(original == reverse){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int num;

    //Asking the user to enter a number
    printf("Enter a number : ");
    scanf("%d", &num);

    if(palindromeNum(num)){
        printf("%d is a Palindrome Number.", num);
    }else{
        printf("%d is not a Palindrome Number.", num);
    }

    return 0;
}