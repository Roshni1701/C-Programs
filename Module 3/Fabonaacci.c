// WAP to print Fibonacci series up to given numbers

#include<stdio.h>

int main()
{
	int firstTerm = 1, secondTerm = 1, n, nextTerm;
	
	printf("Enter value of n:");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		if (i != n)
			printf("%d,", firstTerm);
		else {
			printf("%d",firstTerm);
		nextTerm = firstTerm + secondTerm;
		firstTerm = secondTerm;
		secondTerm = nextTerm;
	}
	return 0;
}