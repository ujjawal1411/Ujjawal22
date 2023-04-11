#include <stdio.h>

int main() {
    int num, sumEven = 0, sumOdd = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num % 2 == 0) {
            sumEven += num;
        } else {
            sumOdd += num;
        }
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);

    return 0;
}
