// 19 Pattern

#include<stdio.h>

int main()
{
	int n;
	printf("Input number of n : ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (j % 2 == 1) {
				printf("1 ");
			} else {
				printf("0 ");
			}
		}
		printf("\n");
	}
}