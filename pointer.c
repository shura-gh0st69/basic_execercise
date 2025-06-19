#include <stdio.h>

void reference_function(int *derefrencing_address) {
    printf("hello i am passing: %d", *derefrencing_address); // 
}

int main() {
    int number = 444; // address 
    
    reference_function(&number); // &number -> 000000F2879FF98C -> *000000F2879FF98C -> 444

    return 0;
}