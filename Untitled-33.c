#include<stdio.h>
int add (int, int);  // Function Declaration
void main() {
	int a, b, s;
	/*Declaring a pointer to function with int return type
	and takes the two formal arguments of int type*/
	int (*ptr) (int,int);
	// Address of the function must be assigned to a pointer
	ptr= &add;
	// Through pointer to function, function is called
	// a and b are actual parameters, s is variable in which the function return value
	// ptr is pointer name which points to function
	a= 30;
	b= 50;
	s= (*ptr) (a,b);
	printf("%u", s);
}int add(int a, int b) {
	int c;
	c=a+b;
	return c;
}