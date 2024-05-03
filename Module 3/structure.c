#include<stdio.h>

struct myStructure {
	int number;
	char letter;
};

int main() {
	struct myStructure s1;
	s1.number = 8;
	s1.letter = 'R';
	
	printf("Number: %d", s1.number);
	printf("\nLetter: %c", s1.letter);
	
	return 0;
}