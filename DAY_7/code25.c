#include<stdio.h>

//Calculating factorial using recursive call
int fact(int x){
    if(x == 0){
        return 1;
    }else if(x == 1){
        return 1;
    }else{
        return x * fact(x-1);
    }
}

int main(){
    int num;

    //Asking the user to enter a number
    printf("Enter the number : ");
    scanf("%d", &num);

    int result = fact(num);

    //Printing factorial
    printf("Factorial of %d is %d.", num, result);
    
    return 0;
}