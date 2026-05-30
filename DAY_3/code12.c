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

    int result_lcm = (num1 * num2)/calculate_gcd(num1, num2);

    //Printing lcm
    printf("LCM of %d and %d are : %d", num1, num2, result_lcm);

    return 0;
}