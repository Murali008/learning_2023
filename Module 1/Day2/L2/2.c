#include <stdio.h>

int compareBoxes(int boxA[], int boxB[], int size) {
    int matchCount = 0;

    for (int i = 0; i < size; i++) {
        int currentItem = boxA[i];
        int foundMatch = 0;

        for (int j = 0; j < size; j++) {
            if (currentItem == boxB[j]) {
                foundMatch = 1;
                break;
            }
        }

        if (foundMatch) {
            matchCount++;
        }
    }

    return (matchCount == size) ? 1 : 0;
}

int main() {
    int size;
    printf("Enter the size of the boxes: ");
    scanf("%d", &size);

    int boxA[size], boxB[size];

    printf("Enter the items for Box A:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &boxA[i]);
    }

    printf("Enter the items for Box B:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &boxB[i]);
    }

    int result = compareBoxes(boxA, boxB, size);

    if (result) {
        printf("The boxes have a one-to-one mapping of items.\n");
    } else {
        printf("The boxes do not have a one-to-one mapping of items.\n");
    }

    return 0;
}
