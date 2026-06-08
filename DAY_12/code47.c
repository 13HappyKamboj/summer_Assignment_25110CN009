#include<stdio.h>

//Function for Fibonacci Series.
int fibonacciSeries(int x){
    int t1 = 0, t2 = 1, next;

    for(int i = 1; i <= x; i++){
        printf("%d ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
}
int main(){
    int num;

    //Asking the user to enter number of terms
    printf("Enter number of terms : ");
    scanf("%d", &num);

    printf("Fibonacci Series : ");
    fibonacciSeries(num);

    return 0;
}