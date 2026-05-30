#include <stdio.h>

int main() {
    int range1, range2, isPrime;

    //Asking the user to enter the range
    printf("Enter the starting number : ");
    scanf("%d", &range1);
    printf("Enter the ending number : ");
    scanf("%d", &range2);

    printf("Prime Numbers between %d and %d are:\n", range1, range2);

    //Checking the Prime Conditions
    for (int num = range1; num <= range2; num++) {

        isPrime = 1;

        if (num <= 1) {
            isPrime = 0;
        } else {
            for (int i = 2; i < num; i++) {
                if (num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }

    return 0;
}