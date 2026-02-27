// Week 5, Session 2

/* Task 3.1
 * Number Guessing Game
 * A program where the computer selects a random number and the person tries to guess it
 */

#include <stdio.h>
#include <stdlib.h>  // For rand(), srand(), atoi()
#include <time.h>    // For time()
#include <string.h>  // For strcspn()

int main(void) {
    char input[20];      // Buffer for input
    int guess;           // The person's guess
    int target;          // The random number to guess
    int num_guesses;     // Counter for number of guesses
    int min = 1;         // Minimum value for random number
    int max = 100;       // Maximum value for random number
    int playing = 1;     // Flag to control the main game loop
    
    // Seed the random number generator
    srand(time(NULL));
    
    printf("=== Number Guessing Game ===\n");
    printf("I'm thinking of a number between %d and %d\n", min, max);
    
    // TODO: Generate a random number between min and max
    // Hint: target = min + rand() % (max - min + 1);
    target = min + rand() % (max - min + 1);
    // TODO: Implement the main game loop
    // This should continue until the person decides to quit
    while (playing ==1) {
        // Reset number of guesses for a new game
        num_guesses = 0;
        
        // TODO: Implement the guessing loop
        // This should continue until the correct number is guessed
        while (guess != target) {
            printf("Enter your guess: ");
            
            // TODO: Read and process the input
            // Use fgets() to read input
            // Use atoi() to convert to integer
            fgets(input, 10, stdin);
            guess = atoi(input);
            num_guesses++;
            
            // TODO: Check if the guess is correct, too high, or too low
            // Provide appropriate in-game feedback
            if (guess == target) {
                printf("Your guess was correct! It took you %d guesses!", num_guesses);
            }
            else if (guess < target) {
                printf("Your guess was too low!");
            }
            else if (guess > target) {
                printf("Your guess was too high!");
            }
            // TODO: Offer a hint after several failed attempts
            if (num_guesses > 5) {
                int difference = abs(target - guess);
                printf ("You are within %d of your target", difference);
            }
        }
        // TODO: Ask if the person wants to play again
        // Update the 'playing' flag based on the answer
        char choice;
        printf("Would you like to play again? (Y/N): ");
        scanf("%c", &choice);
        if (choice == 'N' || choice == 'n') {
            playing = 0;
        }
    }
    printf("\nThanks for playing!\n");
    return 0;
}
