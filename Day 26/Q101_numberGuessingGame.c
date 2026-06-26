#include <stdio.h>

int main() {
    int number = 7, guess;

    printf("Guess a number (1-10): ");
    scanf("%d", &guess);

    if (guess == number)
        printf("Correct Guess!");
    else
        printf("Wrong Guess! Correct Number = %d", number);

    return 0;
}