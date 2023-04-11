#include <stdio.h>
// Start of main function
int main() {
    // variable Declaration
    int i, n; i=1;
    // Output Statement (prompt)
    printf("Print all odd numbers till: ");
    // Input upper limit of even number from user
    scanf("%d", &n);
    printf("All odd numbers from 1 to %d are: \n", n);
    //Starts loop counter from 1, increments by 1 till i<=n
    
    while(i<=n) {
        //Check even condition before printing
        if(i%2 !=0) {
            printf("%d\n", i);
        }

        i++;
    }
    return 0;
}