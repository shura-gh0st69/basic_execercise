#include <stdio.h>

int main() {
    int three = 156; // 1 5 6 

    int a = three / 100; // 1 
    int b = three % 100 / 10; // three % 100 = 56 -> 56 / 10 = 5
    int c = three % 10; // three % 10 = 6

    printf("first number %d, second number %d, third number %d", a, b, c);
    
    getchar();
    return 0;
};