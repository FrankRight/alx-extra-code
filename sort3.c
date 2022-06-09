#include<stdio.h>

// A sorting function
int sort3(int num1, int num2, int num3) {
    if (num1 < num2) {
        if (num2 < num3) {
            printf("%d => %d => %d\n", num1, num2, num3);
        } else {
            if(num3 < num1) {
                printf("%d => %d => %d\n", num3, num1, num2);
            } else {
                printf("%d => %d => %d\n", num1, num3, num2);
            }
        }        
    } else {
        if (num1 < num3) {
            printf("%d => %d => %d\n", num2, num1, num3);
        } else {
            if(num3 < num2) {
                printf("%d => %d => %d\n", num3, num2, num1);
            } else {
                printf("%d => %d => %d\n", num2, num3, num1);
            }
        }
    }
}

int main() {
    // reads 3 numbers
    int num1, num2, num3;

    printf("Enter 3 numbers:\n");
    printf("Number 1: ");
    scanf("%d", &num1);

    printf("Number 2: ");
    scanf("%d", &num2);

    printf("Number 3: ");
    scanf("%d", &num3);
    
    //sorts them in order
    sort3(num1, num2, num3);

    return 0;
}