#include <stdio.h>

int main() {
    int num, evenSum = 0, oddSum = 0;

    do {
        printf("Enter a number (0 to exit): ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            evenSum += num;
        } else {
            oddSum += num;
        }
    } while (num != 0);

    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}
