// Find the Character Is Vowel or Not
#include<stdio.h>
#include <ctype.h>

int main()
{
	char ch, value;
	printf("Enter single character: ");
	scanf("%c", &ch);
	
	switch(tolower(ch)) {
		case a:
		case e:
		case i:
		case o:
		case u:
			printf("%c is vowel", ch);
			break;
		default:
			if (ch >= 'a' && ch <= 'z') {
				printf("%c is consonant", ch);
			} else {
				System.out.println(" %c is not a valid alphabet character.", ch);
			}
	}
	return 0;
}