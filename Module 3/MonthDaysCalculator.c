// Write a program in C to read any Month Number in integer and display the number of days for this month

#include<stdio.h>

int main()
{
	int monthNumber;
	
	printf("Enter the month number (1-12): ");
	scanf("%d", &monthNumber);
	
	if (monthNumber < 1 || monthNumber > 12) {
		printf("Invalid month number. Please enter a number between 1 and 12.");
	} else {
		switch (monthNumber) {
		case 1: // January
		case 3: // March
		case 5: // May
		case 7: // July
		case 8: // August
		case 10: // October
		case 12: // December
			printf("Number of days in the month: 31");
			break;
		case 4: // April
		case 6: // June
		case 9: // September
		case 11: // November
			printf("Number of days in the month: 30");
			break;
		case 2: // February
			printf("Number of days in the month: 28"); // assuming non-leap year
			break;
		default:
			printf("Invalid monh number"); // Invalid month number
			break;
		}
	}
	return 0;
}