#include <stdio.h>
#include <string.h>

void swap(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

void bubbleSort(char *arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    char *names[] = {
        "Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"
    };
    int size = sizeof(names) / sizeof(names[0]);

    printf("Names before sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", names[i]);
    }

    bubbleSort(names, size);

    printf("\nNames after sorting in alphabetical order:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
