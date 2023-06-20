#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} Complex;

Complex readComplexNumber() {
    Complex number;
    
    printf("Enter the real part: ");
    scanf("%lf", &(number.real));
    
    printf("Enter the imaginary part: ");
    scanf("%lf", &(number.imaginary));
    
    return number;
}

void writeComplexNumber(Complex number) {
    printf("Complex number: %.2f + %.2fi\n", number.real, number.imaginary);
}

Complex addComplexNumbers(Complex num1, Complex num2) {
    Complex sum;
    
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;
    
    return sum;
}

Complex multiplyComplexNumbers(Complex num1, Complex num2) {
    Complex product;
    
    product.real = num1.real * num2.real - num1.imaginary * num2.imaginary;
    product.imaginary = num1.real * num2.imaginary + num1.imaginary * num2.real;
    
    return product;
}

int main() {
    Complex num1, num2, sum, product;
    
    printf("Reading the first complex number:\n");
    num1 = readComplexNumber();
    
    printf("\nReading the second complex number:\n");
    num2 = readComplexNumber();
    
    printf("\nPerforming addition:\n");
    sum = addComplexNumbers(num1, num2);
    writeComplexNumber(sum);
    
    printf("\nPerforming multiplication:\n");
    product = multiplyComplexNumbers(num1, num2);
    writeComplexNumber(product);
    
    return 0;
}
