#include <stdio.h>

int main() {
    // 2 -> 1 2 -> 3 -> 1 3 -> 4 -> 1 2 4 -> 5 -> 1 5 -> 6 -> 1 2 3 6
    int input_number;
    printf("Enter the number: ");
    scanf("%d", &input_number);

    int count = 0;

    for (int i = 1; i <= input_number; i++) {
        if (input_number % i == 0) {
            count += 1; // 1 + 1 + 1 -> 3 < 3
        }
    }

    if (count < 3) {
        printf("the number %d is prime", input_number);
    }
    else {
        printf("the number %d is not prime", input_number);
    }
}