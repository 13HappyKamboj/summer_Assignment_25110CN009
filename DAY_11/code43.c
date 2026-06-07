#include<stdio.h>

//Function to find whether number is Prime or not.
int numPrime(int x){
   if(x <= 1){
    return 0;
   }else{
    for(int i = 2; i <= x/2; i++){
        if(x % i == 0){
            return 0;
        }
        return 1;
        }
    }
}
int main(){
    int num;

    //Asking the user to enter a number
    printf("Enter a number : ");
    scanf("%d", &num);

    if(numPrime(num)){
        printf("%d is a Prime Number.", num);
        }
    else{
        printf("%d is not a Prime Number.", num);
        }

    return 0;
}