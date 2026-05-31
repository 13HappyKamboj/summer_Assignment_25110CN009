#include<stdio.h>
int main(){
    int num, t1 = 0, t2 = 1, next;

    //Asking the user to enter the number of terms in the series
    printf("Enter the number of terms : ");
    scanf("%d", &num);

    printf("Fibonacci Series : ");

    //Finding fibonacci series terms
    for(int i = 1; i <= num; i++){
        printf("%d ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }

    return 0;
}