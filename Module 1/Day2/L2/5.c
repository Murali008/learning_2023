#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void encode(char *str, int key) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        str[i] = str[i] ^ key;
    }
}

void decode(char *str, int key) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        str[i] = str[i] ^ key;
    }
}

int main() {
    char str[100];
    int key;

    printf("Enter a string: ");
    scanf("%[^\n]s", str); 
    printf("Enter the key (integer): ");
    scanf("%d", &key);

    encode(str, key);
    printf("Encoded string: %s\n", str);

  
    decode(str, key);
    printf("Decoded string: %s\n", str);

    return 0;
}
