#include<stdio.h>
int main(){
    int num;

    //Asking the user to enter the number of rows
    printf("Enter the number of rows : ");
    scanf("%d", &num);

    //Printing half pyramid pattern
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}