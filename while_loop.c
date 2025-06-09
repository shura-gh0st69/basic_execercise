#include <stdio.h>

int main() {
    int looping_start = 1; 
    int looping_end = 3;
    int cube_number;

    int sum = 1; // 1 * 3 -> 3 * 3 -> 9 -> 9 * 3 -> 27

    printf("which number of cube you want to calculate: ");
    scanf("%d", &cube_number); //  3

    while(looping_start <= looping_end) { 
        sum *= cube_number; // 1 * 3 = 3 -> 3 * 3 = 9 -> 9 * 3 = 27
        looping_start++; //   3 
    }

    printf("the count of cube for %d -> %d", cube_number, sum);
    return 0;
}