#include<stdio.h>
int main(){
    int decimal, remainder, binary = 0, i = 1;

    //Asking the user to enter the decimal number
    printf("Enter the decimal number : ");
    scanf("%d", &decimal);

    //Calculating the binary number
    while(decimal != 0){
        remainder = decimal % 2;
        binary = binary + remainder * i;
        decimal = decimal / 2;
        i = i * 10;
    }

    //Printing the binary number
    printf("The binary number is %d", binary);

    return 0;

}