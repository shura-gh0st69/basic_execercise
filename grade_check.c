#include <stdio.h>

int main() {
    int sum = 0;
    int input_number;
        
    for (int i = 1; i <= 3; i++) {
        printf("Enter marks for subject %d: ", i);
        scanf("%d", &input_number);

        sum += input_number;
    }

    float average_mark = sum / 3.0;

    if (average_mark >= 80) {
        printf("Average Marks: %.2f\n", average_mark);
        printf("Grade A");
    }
    else if (average_mark >= 60 && average_mark < 80) {
        printf("Average Marks: %.2f\n", average_mark);
        printf("Grade B");
    }
    else if (average_mark >= 40 && average_mark < 60) {
        printf("Average Marks: %.2f\n", average_mark);
        printf("Grade C");
    }
    else {
        printf("Average Marks: %.2f\n", average_mark);
        printf("Grade F");
    }
}