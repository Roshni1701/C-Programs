// WAP to take 10 no. Input from user find out below values a. How many Even numbers are there b. How many odd numbers are there

#include <stdio.h>

int main() {
    int numbers[10];
    int even_count = 0, odd_count = 0;

    // Taking input from the user
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    // Counting even and odd numbers
    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // Displaying results
    printf("Number of even numbers: %d\n", even_count);
    printf("Number of odd numbers: %d\n", odd_count);

    return 0;
}
