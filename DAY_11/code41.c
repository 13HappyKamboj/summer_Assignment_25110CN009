#include<stdio.h>

//Function to find sum of two numbers.
int addNum(int x, int y){
    return x + y;
}
int main(){
    int num1, num2;

    //Asking the user to enter two numbers
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    printf("The sum of %d and %d is %d.", num1, num2, addNum(num1, num2));

    return 0;
}