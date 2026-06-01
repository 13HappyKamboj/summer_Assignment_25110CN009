#include <stdio.h>

int main() {
    int num, i, prime = 1;

    //Asking the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    //Finding largest prime factor of the entered number
    for (i = 2; i <= num; i++) {
        while (num % i == 0) {
            prime = i;
            num = num / i;
        }
    }

    //Printing largest prime factor of the entered number
    printf("Largest Prime Factor = %d", prime);

    return 0;
}