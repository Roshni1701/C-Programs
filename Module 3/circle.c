// 3 WAP to Find Area And Circumference of Circle

#include <stdio.h>
#define PI 3.14159

int main()
{
	float radius, area, circumference;
	printf("Enter radius: ");
	scanf("%f", &radius);
	
	area = PI * radius * radius;
	circumference = 2 * PI * radius; 
	
	printf("Area of the circle: %.2f\n", area);
	printf("Area is %.2f", circumference);
	
	return 0;
}