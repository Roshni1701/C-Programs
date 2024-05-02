// C Program to Check Uppercase or Lowercase or Digit or Special Character
#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is an alphabet.\n", ch);
        if(ch >= 'a' && ch <= 'z') {
            printf("%c is a lowercase alphabet.\n", ch);
        }
        else {
            printf("%c is an uppercase alphabet.\n", ch);
        }
    } else if(ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is a special character.\n", ch);
    }
    return 0;
}