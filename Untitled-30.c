#include<stdio.h>
// Function Heading
int main() {
	// Variable Declaration
	char ch;
	// Output Statement (Prompt)
	printf("\nEnter any character");
	// Input Statement reads the entered charcter and stores it into the char variable ch
	scanf("%c", &ch);
	/* Using the format %c  we can get the ASCII code of a character.
	   When we  %d format specifier for a char variable then it displays the ASCII value of a char*/ 
	printf("\nASCII value of character %c is: %d\n", ch, ch);
	return 0; 
}