#include<stdio.h>
int main(){
    int num, isPrime = 1;

    //Asking the user to enter the number
    printf("Enter the number : ");
    scanf("%d", &num);

    //Checking Prime Conditions
    if(num <= 1){
        isPrime = 0;
    } else{
        for(int i = 2; i < num; i++){
            if(num % i == 0){
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime == 1){
        printf("Number is Prime.");
        } else{
            printf("Number is not Prime.");
            }

    return 0;
}
