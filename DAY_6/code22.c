#include<stdio.h>
#include<math.h>
int main(){
    int binary, digit, i = 0, decimal = 0;

    //Asking the user to enter the binary number
    printf("Enter the binary number : ");
    scanf("%d", &binary);

    //Calculating the decimal number
    while(binary != 0){
        digit = binary % 10;
        decimal += digit * pow(2,i);
        binary = binary / 10;
        i++;
    }

    //Printing the decimal number
    printf("The decimal number is %d", decimal);

    return 0;

}