//Number but Wordle
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target1, target2, target3, target4, target5;
    int guess1, guess2, guess3, guess4, guess5;
    int attempts = 0;

    srand(time(0));

    // Generate a random 5-digit number with unique digits
    do {
        target1 = rand() % 10;
        target2 = rand() % 10;
        target3 = rand() % 10;
        target4 = rand() % 10;
        target5 = rand() % 10;
    } while (target1 == target2 || target1 == target3 || target1 == target4 || target1 == target5 || 
             target2 == target3 || target2 == target4 || target2 == target5 ||
             target3 == target4 || target3 == target5 || target4 == target5);

    printf("Guess the 5-digit number (each digit is unique):\n");

    // Allow a maximum of 5 attempts
    while (attempts < 5) {
        printf("\nAttempt %d: Enter your guess (5 unique digits): ", attempts + 1);
        
        // Input guess for each digit
        scanf("%1d %1d %1d %1d %1d", &guess1, &guess2, &guess3, &guess4, &guess5);

        // Provide feedback for each digit
        printf("Feedback: ");
        
        // Check each digit for correct position or wrong position
        if (guess1 == target1) {
            printf("/");
        } else if (guess1 == target2 || guess1 == target3 || guess1 == target4 || guess1 == target5) {
            printf("O");
        } else {
            printf("x");
        }

        if (guess2 == target2) {
            printf("/");
        } else if (guess2 == target1 || guess2 == target3 || guess2 == target4 || guess2 == target5) {
            printf("O");
        } else {
            printf("x");
        }

        if (guess3 == target3) {
            printf("/");
        } else if (guess3 == target1 || guess3 == target2 || guess3 == target4 || guess3 == target5) {
            printf("O");
        } else {
            printf("x");
        }

        if (guess4 == target4) {
            printf("/");
        } else if (guess4 == target1 || guess4 == target2 || guess4 == target3 || guess4 == target5) {
            printf("O");
        } else {
            printf("x");
        }

        if (guess5 == target5) {
            printf("/");
        } else if (guess5 == target1 || guess5 == target2 || guess5 == target3 || guess5 == target4) {
            printf("O");
        } else {
            printf("x");
        }
        printf("\n");

        // Check if the guess is correct
        if (guess1 == target1 && guess2 == target2 && guess3 == target3 && guess4 == target4 && guess5 == target5) {
            printf("Congratulations! You've guessed the number correctly!\n");
            break;
        }

        attempts++;
    }

    // If user exhausts all attempts without guessing correctly
    if (attempts == 5) {
        printf("\nSorry, you've run out of attempts. The correct number was: %d%d%d%d%d\n", target1, target2, target3, target4, target5);
    }

    return 0;
    
}