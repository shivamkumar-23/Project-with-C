#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random, guess, attempt = 0;        // Variable defining    
    srand(time(NULL));                     // Seeding random number 

    printf("\n\033[1;31mWelcome to the Guessing Number Game!!\033[0m\n");
    random = rand() % 100 + 1;  // generating between 0 to 100
    
    /* Now From here we start making loop for gusseing the name in which the theme
    is gonna be when player guess the no. if it is larger than the generated no.
    the player got the message ( Guess the smallest Number) and for smaller no. 
    vice-versa and when the player guess the right number the game will gonna be 
    end. */

    do
    {
        printf("\n\033[1;33mGuess the Number between (1 to 100):\033[0m");      // Player input
        scanf("%d", &guess);
        attempt++;

        if (guess<random)
        {
            printf("\033[1;32mWOW!! You are too Close Guess a larger number.\033[0m \n");
        }else if (guess>random)
        {
            printf("\033[1;34mWOW!! You are too Close Guess a smaller number.\033[0m \n");
        }else{
            printf("\n\033[1;31mCongratulations!!! You Won the game in %d attempt\033[0m\n", attempt);
            printf("\n\033[1;32mDeveloped by Shivam Kumar\033[0m");
            printf("\n\033[1;32m Linkedin: www.linkedin.com/in/shivamsahu2004\033[0m");
        }
        
        
    } while (guess != random);
    
    return 0;
}