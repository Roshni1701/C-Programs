// Convert minutes into seconds and hours

#include <stdio.h>

int main()
{
	int minutes, seconds;
	float hours;
	printf("Enter the number of minutes: ");
	scanf("%d", &minutes);
	
	seconds = minutes * 60;
	hours = (float) minutes / 60;
	
	printf("%d minutes is equal to %d seconds", minutes, seconds);
	printf("\n %d minutes is equal to %.2f hours", minutes, hours);
	
	return 0;
}