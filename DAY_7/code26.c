#include<stdio.h>

//Finding fibonacci series term using recursive call
int fibonacci(int x){
    if(x == 0){
        return 0;
    }else if(x == 1){
        return 1;
    }else{
        return fibonacci(x-1) + fibonacci(x-2);
    }
}

int main(){
    int num;

    //Asking the user to enter the number of terms
    printf("Enter number of terms : ");
    scanf("%d", &num);

    //Printing fibonacci series
    for(int i = 0; i < num; i++){
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}