#include<stdio.h>
#include<math.h>
int main(){
    int num, expo;

    //Asking the user to enter a number
    printf("Enter a base number : ");
    scanf("%d", &num);

    //Asking the user to enter the power
    printf("Enter the power : ");
    scanf("%d", &expo);

    int result = 1;

    //Calculating num rasied to power expo
    for(int i = 1; i <= expo; i++){
        result = result * num;
    }

    printf("%d to the power %d is %d.", num, expo, result);

    return 0;

}