#include<stdio.h>
int main(){

    //Printing reverse pyramid
    for(int i = 5; i >= 1; i--){
        for(int j = i; j < 5; j++){
            printf(" ");
        }
        for(int k = 1; k <= (2 * i - 1); k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}