#include <stdio.h>

int main(void)
{

    int n;
    int max = 0;

    printf("Enter a number (0 to exit): ");
    scanf("%d", &n);

    while (n != 0)
    {
        if (max < n)
        {
            max = n;
        }
        printf("Enter a number (0 to exit): ");
        scanf("%d", &n);
    }
    printf("Max is: %d", max);
}