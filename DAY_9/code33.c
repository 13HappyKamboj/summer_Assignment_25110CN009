#include<stdio.h>
int main(){

    //Printing reverse star pattern
    for(int i = 1; i <= 5; i++){
        for(int j = 5; j >= i; j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}