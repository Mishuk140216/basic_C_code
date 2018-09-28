#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int randomNumber, guessNumber;
    srand (time(NULL));

    randomNumber = 0 + rand() % 99;

    printf("This is a Number guessing Game: \n");


    do {
        printf("\nenter a number between 0 to 100: ");
        scanf("%d", &guessNumber);

        if (randomNumber < guessNumber) printf("\nYour guess is higher than the number. Guess again!\n");
        else if (randomNumber > guessNumber) printf("\nYour guess is lower than the number. Guess again!\n");
        } while (randomNumber != guessNumber);

    printf("\n\nYou win!!");

    getch();
    return 0;
}
/**Design an algorithm to play a number-guessing game. The objective is to ran-
domly generate an integer greater than or equal to 0 and less than 100. Then
prompt the player (user) to guess the number. If the player guesses the number
correctly, output an appropriate message. Otherwise, check whether the guessed
number is less than the random number. If the guessed number is less than the
random number generated, output the message, \Your guess is lower than the
number. Guess again!"; otherwise, output the message, \Your guess is higher than the number. Guess again!". Then prompt the player to enter another num-
ber. The player is prompted to guess the random number until the player enters
the correct number.*/
