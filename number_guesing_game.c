#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lower, upper, num, guess, attempts = 0;
    
    printf("Enter the lower bound of the range: ");
    scanf("%d", &lower);
    
    printf("Enter the upper bound of the range: ");
    scanf("%d", &upper);
    
    srand(time(0)); // Seed the random number generator
    num = (rand() % (upper - lower + 1)) + lower; // Generate a random number within the specified range
    
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between %d and %d. Can you guess it?\n", lower, upper);
    
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        
        attempts++;
        
        if (guess == num) {
            printf("Congratulations! You guessed the correct number %d in %d attempts.\n", num, attempts);
            break;
        } else if (guess < num) {
            printf("Too low. Try again.\n");
        } else {
            printf("Too high. Try again.\n");
        }
    } while (1);
    
    return 0;
}
