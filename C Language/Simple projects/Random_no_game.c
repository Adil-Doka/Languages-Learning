#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @brief Entry point of the program.
 * 
 * This program generates a random number between 1 and 100 and prompts the user to guess the number.
 * It provides feedback if the guessed number is higher or lower than the generated number.
 * The program continues to prompt the user until the correct number is guessed.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main()
{
    int num, guess = 0;
    srand(time(0)); // Seed the random number generator with the current time
    int rannum = (rand() % 100) + 1; // Generate a random number between 1 and 100

    printf("Enter a number: ");
    do {
        scanf("%d", &num); // Read the user's guess
        guess++;
        if (num > rannum)
            printf("Enter a smaller number: ");
        else if (num < rannum)
            printf("Enter a greater number: ");
    } while (num != rannum); // Continue until the correct number is guessed

    printf("You guessed the number right in %d guesses\n", guess);
    return 0;
}