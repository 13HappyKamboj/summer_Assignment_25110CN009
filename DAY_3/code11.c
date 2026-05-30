#include<stdio.h>

//Calculating gcd using function
int calculate_gcd(int a, int b){
    if(b==0){
        return a;
    }else{
        return calculate_gcd(b, a%b);
    }
}
int main(){
    int num1, num2;
    
    //Asking the user to enter two numbers
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    int result = calculate_gcd(num1, num2);

    //Printing gcd
    printf("GCD of %d and %d are : %d", num1, num2, result);

    return 0;
}