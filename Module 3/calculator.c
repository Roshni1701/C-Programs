// Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)

#include<stdio.h>
int main()
{
	char option;
	int num1, num2;
	float result;
	
	printf ("Choose an operator(+, -, *, /) to perform the operation\n ");  
    scanf ("%c", &option);
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	switch(option)  
    {  
        case '+':  
            result = num1 + num2;
            printf (" Addition of %d and %d is: %.2f", num1, num2, result);  
            break;
		case '-':
			result = num1 - num2;
			printf("Substraction of %d and %d is: %.2f", num1, num2, result);
			break;
		case '*':
			result = num1 * num2;
			printf("Multiplication of %d and %d is: %.2f", num1,num2, result);
			break;
		case '/':
			if(num2==0) {
				printf (" \n Divisor cannot be zero. Please enter another value ");  
                scanf ("%d", &num2);  
			}
			result = num1 / num2;
			printf("Division of %d and %d is: %.2f", num1, num2, result);
			break;
		default:
			printf("Enter valid operator");
			break;
	}
	return 00;
}