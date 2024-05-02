// Check Number Is Positive or Negative
#include <stdio.h>

int main()
{
	int number;
	printf("Enter number: ");
	scanf("%d", &number);
	if(number > 0) {
		printf("%d is positive number", number);
	} else if (number < 0 ) {
		printf("%d is negative number", number);
	} else {
		printf("%d is zero", number);
	}
	return 0;
}