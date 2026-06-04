#include<stdio.h>
int main(){

    //Printing repeated-number pattern
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}