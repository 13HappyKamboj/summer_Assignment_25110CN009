#include<stdio.h>

//Function for Perfect Number.
int perfectNum(int x){
    int sum = 0;

    for(int i = 1; i < x; i++){
        if(x % i == 0){
            sum += i;
        }
    }

    if(x == sum){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int num;

    //Asking the user to enter a number
    printf("Enter a number : ");
    scanf("%d", &num);

    if(perfectNum(num)){
        printf("%d is a Perfect Number.", num);
    }else{
        printf("%d is not a Perfect Number.", num);
    }

    return 0;
}
