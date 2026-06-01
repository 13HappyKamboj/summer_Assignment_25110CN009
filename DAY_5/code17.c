#include<stdio.h>
int main(){
    int num, sum = 0;

    //Asking the user to enter a number
    printf("Enter the number : ");
    scanf("%d", &num);

    //Finding sum of each divisor
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            sum += i;
        }
    }

    //Checking and displaying whether a number is perfect or not.
    if(sum == num){
        printf("%d is a Perfect Number.", num);
    }else{
        printf("%d is not a Perfect Number.", num);
    }

    return 0;
}