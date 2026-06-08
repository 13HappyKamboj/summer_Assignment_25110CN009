#include<stdio.h>

//Function for Armstrong Number.
int armstrongNum(int x){
    int original = x, digit, sum = 0;

    while(x != 0){
        digit = x % 10;
        sum = sum + (digit * digit * digit);
        x = x / 10;
    }

    if(original == sum){
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

    if(armstrongNum(num)){
        printf("%d is a Armstrong Number.", num);
    }else{
        printf("%d is not a Armstrong Number.", num);
    }

    return 0;
}