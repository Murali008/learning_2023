#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:  
            num |= 1;  
            break;
        case 2:  
            num &= ~(1 << 31);  
            break;
        case 3:  
            num ^= 1 << 15;  
            break;
        default:
            printf("Error: Invalid operation type.\n");
            break;
    }

    return num;
}

int main() {
    int num, oper_type, result;
  
    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    result = bit_operations(num, oper_type);

    printf("Result: %d\n", result);

    return 0;
}
