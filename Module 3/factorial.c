// WAP to print factorial of given number
#include<stdio.h>

int main()
{
	int value, fact = 1;
	
	printf("Enter value: ");
	scanf("%d",&value);
	
	for(int i = value; i >= 1; i--) {
		fact = fact * i;
	}
	printf("Factorial is: %d", fact);
	return 0;
}