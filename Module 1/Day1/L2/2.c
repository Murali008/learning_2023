#include <stdio.h>

char calculateGrade(int score) {
    int range = score / 10;

    switch (range) {
        case 10:
        case 9:
            return 'A';
        case 8:
            return 'B';
        case 7:
            return 'C';
        case 6:
            return 'D';
        case 5:
        case 4:
            return 'E';
        default:
            return 'F';
    }
}

int main() {
    int score;
    printf("Enter the student's score: ");
    scanf("%d", &score);

    char grade = calculateGrade(score);

    printf("Grade: %c\n", grade);

    return 0;
}
