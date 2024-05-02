// Write a C program to check whether a triangle can be formed with the given values for the angles
#include <stdio.h>

int main()
{
	int val1, val2, val3;
	printf("Enter the three angles of the triangle");
	
	printf("\nAngle 1: ");
	scanf("%d", &val1);
	
	printf("Angle 2: ");
	scanf("%d", &val2);
	
	printf("Angle 3: ");
	scanf("%d", &val3);

	if((val1 + val2 + val3) == 180)	
	{
		printf("The given angles can form a valid triangle.");
	} else {
		printf("The given angles cannot form a valid triangle.");
	}
	
	return 0;
}