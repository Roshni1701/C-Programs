// Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include <stdio.h>

int main() {
    int number, max = -1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        int digit = number % 10;
        if (digit > max) {
            max = digit;
        }
        number /= 10;
    }
	printf("The maximum digit is: %d\n", max);
    return 0;
}