#include <stdio.h>

int main() {
    int i;
 
    do {
        printf("to break the loop put -1: ");
        scanf("%d", &i);

        printf("the value of i: %d\n", i);
    } while (i > 0); // i greater than 0 i always greater than 0 -1 

    return 0;
}

