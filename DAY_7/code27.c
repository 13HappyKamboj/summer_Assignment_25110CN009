#include<stdio.h>

//Calculating sum using recursive call
int digit_sum(int x){
    int sum = 0;

    if(x == 0){
        return 0;
    }else{
        return (x % 10) + digit_sum(x/10);
    }
}
int main(){
    int num;

    //Asking the user to enter a number
    printf("Enter a number : ");
    scanf("%d", &num);

    //Printing sum of digits
    printf("Sum of digits is %d.", digit_sum(num));
}