/*
Question 1: Write a function to check if a number is a perfect number. A perfect number is a number
that is equal to the sum of its proper divisors (excluding the number itself).


Enter a positive integer: 6 // input_number = 6 -> 1 + 2 + 3 -> sum = 6 
6 is a perfect number.

Enter a positive integer: 11
11 is not a perfect number.
*/

#include <stdio.h>

int main() {
    int input_number;
    printf("Enter a positive integer: ");
    scanf("%d", &input_number);

    int sum = 0;

    for (int i = 1; i < input_number; i++) {
        if (input_number % i == 0) {
            sum += i;
        }
    }

    if (sum == input_number) {
        printf("%d is a perfect number.", input_number);
    }
    else {
        printf("%d is not a perfect number.", input_number);
    }

    return 0;
}