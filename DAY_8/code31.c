#include<stdio.h>
int main(){

    //Printing character triangle
    for(int i = 1; i <= 5; i++){
        for(int j = 0; j < i; j++){
            printf("%c", j+'A');
        }
        printf("\n");
    }

    return 0;
}