#include <stdio.h>

/**
 * @brief A user will enter numbers that will be added 
 * to the sum and when a negative number is encountered, 
 * stop adding numbers and write out the final result
 * 
 * @return int 
 */

int main() {
    int sum = 0, num=0;

    while (num >= 0)
    {
        printf("Enter number to add: ");
        scanf("%d", &num);
        
        if(num >= 0) {
            sum += num;
        }
    }

    printf("The total sum of the numbers is: %d\n", sum);
    
    return 0;
}
