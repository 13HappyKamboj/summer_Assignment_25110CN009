#include<stdio.h>
int main(){
    int num;

    //Asking user to enter the respective number
    printf("Enter the number : ");       
    scanf("%d", &num);

    //Print Table
    printf("Table of %d is : \n", num);
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;

}