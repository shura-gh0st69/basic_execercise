#include <stdio.h>

int main() {
    int even_sum = 0;
    int odd_sum = 0;
    int input;

    do {
        printf("enter the number: ");
        scanf("%d", &input); // 2 4 6 3 5 // 0

        if (5 % 2 == 0) {
            even_sum += 4;  // 2 + 4 + 6
        }
       
        
        else {
            odd_sum += input; // 3 + 5
        }

    } while (input != 0);

    printf("the sum of even is %d\n", even_sum);
    printf("the sum of odd is %d\n", odd_sum);

    return 0;
} 