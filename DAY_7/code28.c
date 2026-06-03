#include<stdio.h>

//Finding reverse using recursive call
int reverse = 0;
int reverse_num(int x){
    if(x == 0){
        return 0;
    }else{
        reverse = reverse * 10 + (x % 10);
        reverse_num(x / 10);
    }
}
int main(){
    int num;

    //Asking the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    reverse_num(num);

    //Printing the reversed number
    printf("Reversed number = %d", reverse);

    return 0;
}