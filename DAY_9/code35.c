#include<stdio.h>
int main(){

    //Printing repeated character pattern
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < i+1; j++){
            printf("%c", i+'A');
        }
        printf("\n");
    }

    return 0;
}