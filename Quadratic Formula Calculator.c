//C Quadratic Equation
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double discriminant, root1, root2;
    
    printf("Quadratic Equation Calculator\n");
    printf("ax^2 + bx + c = 0\n\n");
    
    printf("coefficient a: ");
    scanf("%d", &a);
    printf("coefficient b: ");
    scanf("%d", &b);
    printf("coefficient c: ");
    scanf("%d", &c);
    
    discriminant = (b * b) - (4 * a * c);
    
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\nRoots: x1 = %.2lf, x2 = %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        // One real root (repeated)
        root1 = -b / (2 * a);
        printf("\nOne real root: x = %.2lf\n", root1);
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("\nComplex roots: x1 = %.2lf + %.2lfi, x2 = %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }


    return 0;
}