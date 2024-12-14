//C Calculator
#include <stdio.h>

int main() {
    double x, y;
    char operation;
    printf("C Calculator (+, -, *, /)\n\n"); //Introduction
    
    printf("First Number:\t");
    scanf("%lf", &x);
    printf("Second Number:\t");
    scanf("%lf", &y);
    printf("Operator:\t\t");
    scanf(" %c", &operation);
    
    switch (operation) {
        case '+':   printf("\n%.2lf + %.2lf = %.2lf", x, y, x+y); break; //addition
        
        case '-':   printf("\n%.2lf - %.2lf = %.2lf", x, y, x-y); break; //subtraction
        
        case '*':   printf("\n%.2lf * %.2lf = %.2lf", x, y, x*y); break; //multiplication
        
        case '/':   if (y!=0) printf("\n%.2lf / %.2lf = %.2lf", x, y, x/y); //division if y is not 0
                    else printf("\nError: Can't divide by Zero!"); break;   //if y is zero
        
        default: printf("\nInvalid Operator!"); //Invalid operator
    }

    return 0;
}