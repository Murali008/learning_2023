#include <stdio.h>

int isVowel(char ch) {
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' ||
        ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    int isVowelResult = isVowel(ch);

    if (isVowelResult == 1) {
        printf("Vowel\n");
    } else {
        printf("Not Vowel\n");
    }

    return 0;
}
