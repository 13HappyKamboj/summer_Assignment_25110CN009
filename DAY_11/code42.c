#include<stdio.h>

//Function to find maximum of two numbers.
int maxNum(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}
int main(){
    int num1, num2;

    //Asking the user to enter two numbers
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    printf("The max of %d and %d is %d.", num1, num2, maxNum(num1, num2));

    return 0;
}