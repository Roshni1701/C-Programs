// Write a C program to calculate profit and loss on a transaction. 
#include<stdio.h>

int main()
{
	float costPrice, sellingPrice, profitOrLoss;
	
	printf("Enter the cost price: ");
	scanf("%f", &costPrice);
	
	printf("Enter the selling price: ");
	scanf("%f", &sellingPrice);
	
	profitOrLoss = sellingPrice - costPrice;
	
	if (profitOrLoss > 0) {
			printf("Profit");
	} else if (profitOrLoss < 0) {
		printf("Loss");
	} else {
		printf("No Profit No Loss");
	}
	return 0;
}