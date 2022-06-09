#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int square1 = num1 * num1;
    int square2 = num2 * num2;
    int sum = square1 + square2;

    printf("The sum of there squares is %d\n", sum);

    return 0;
}