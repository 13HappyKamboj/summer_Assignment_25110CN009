#include<stdio.h>
int main(){
    int num, count = 0;

    //Asking the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    //Counting the number of set bits
    while (num != 0) {
        if (num % 2 == 1){
            count++;
        }

        num = num / 2;
    }

    //Printing the count of set bits
    printf("Number of set bits : %d", count);

    return 0;
    
}   