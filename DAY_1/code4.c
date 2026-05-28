#include<stdio.h>
int main(){
    int num;
    int i = 0;

    //Asking the user to enter the number
    printf("Enter the number : ");
    scanf("%d", &num);

    //Calculating no. of Digits
    while(num != 0){
        num = num / 10;
        i++;
    }

    //Printing number of digits
    printf("Digits : %d", i);

    return 0;
}