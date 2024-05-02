// WAP to print number in reverse order
#include<stdio.h>

int main()
{
	int number, reverseNumber;
	
	printf("Enter Number: ");
	scanf("%d", &number);
	
	while (number != 0) {
		int rem = number % 10;
		reverseNumber = reverseNumber * 10 + rem;
		number = number / 10;
	}
	printf("Reverse Number: %d", reverseNumber);
	return 0;
}