#include <stdio.h>

int main() {               
    int my_array_numbers[] = {11, 22, 33, 44, 55};
                            // 0   1   2   3   4 
    
    for (int i = 0; i <= 4; i++) {
        printf("printing the number: %d\n", my_array_numbers[i]);
    }

    return 0;
}