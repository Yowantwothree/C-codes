//Damage-Defense Calculator
//Prototype for future
#include <stdio.h>

int main() {
    int damage, defense, pen;
    printf("Damage-Defense Calculator\n\n");
    
    printf("Damage: ");
    scanf("%d", &damage);
    printf("Defense: ");
    scanf("%d", &defense);
    printf("Penetration: ");
    scanf("%d", &pen);
    
    printf("\nFinal damage: %.2lf", damage * (100/(100.00 + defense - pen)));

    return 0;
}