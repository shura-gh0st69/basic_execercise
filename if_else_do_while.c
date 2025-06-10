#include <stdio.h>

int main() {
    int input;

    do {

        printf("enter the number: ");
        scanf("%d", &input);

        if (input%2 == 0) {
            printf("the number of %d is even\n", input);
        }
        else {
            printf("the number of %d is odd\n", input);
        }

    } while (input != -1); // infinite even or odd check

    return 0;
}