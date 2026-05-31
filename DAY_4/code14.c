#include<stdio.h>
int main(){
    int num, a = 0, b = 1, c;

    //Asking the user to enter Nth term
    printf("Enter the nth term : ");
    scanf("%d", &num);

    //Finding Nth term
    if(num == 1){
        printf("Nth Fibonacci term : %d", a);
    }else if(num == 2){
        printf("Nth Fibonacci term : %d", b); 
    }else{
        for(int i = 3; i <= num; i++){
            c = a + b;
            a = b;
            b = c;
        }
        printf("Nth Fibonacci term : %d", b);
    }

    return 0;


}