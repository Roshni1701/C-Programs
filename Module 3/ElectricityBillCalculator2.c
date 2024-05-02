// 25 Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition: 
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill
#include<stdio.h>

int main()
{
	int unitsConsumed;
	float totalBill;
	
	printf("Enter the number of electricity units consumed: ");
	scanf("%d", &unitsConsumed);
	
	if (unitsConsumed <= 50) {
		totalBill += unitsConsumed * 0.50;
	} else {
		totalBill += 50 * 0.50;
		unitsConsumed -= 50;
	}
	if (unitsConsumed > 0) {
		if (unitsConsumed <= 100) {
			totalBill += unitsConsumed * 0.75;
		} else {
			totalBill += 100 * 0.75;
			unitsConsumed -= 100;
		}
	}
	if (unitsConsumed > 0) {
		if (unitsConsumed <= 100) {
			totalBill += unitsConsumed * 1.20;
		} else {
			totalBill += 100 * 1.20;
			unitsConsumed -= 100;
		}
	}
	if (unitsConsumed > 0) {
		totalBill += unitsConsumed * 1.50;
	}
	totalBill *= 1.20;
	printf("Total Electricity Bill: Rs. %.2f", totalBill);
	
	return 0;
}