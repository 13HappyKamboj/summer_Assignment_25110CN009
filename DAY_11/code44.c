#include<stdio.h>

//Function to find factorial of a number.
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
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("The factorial of %d is %d.", num, fact(num));

    return 0;
}