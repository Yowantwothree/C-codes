// Collatz Conjecture
#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);
    //output initial number to the user

    printf("\nOutput of Collatz Conjecture:\n%d", num);
    //this loop will continue until the number is no longer greater than 1
    
    while (num > 1) {
        //if the number is even, divide it by 2
        if (num % 2 == 0) {
            num /= 2;
        }
        //otherwise, odd numbers are multiplied by 3 and then added to 1
        else {
            num = num * 3 + 1;
        }
        //the last step of each iteration of the loop is to display the new update to the number
        printf(" -> %d", num);
    }
    return 0;
}