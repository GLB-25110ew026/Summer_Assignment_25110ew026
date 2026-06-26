//WAP to create number-guessing game.
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int secret,guess,attempts=0;
    secret=(rand()%100)+1; 
    printf("Guess the number between 1 and 100:\n");
    do 
    {
        printf("Enter the guess: ");
        scanf("%d",&guess);
        attempts++;
        if(guess>secret) 
        {
            printf("Too high!\n\n");
        } 
        else if(guess<secret) 
        {
            printf("Too low!\n\n");
        }
    } 
    while(guess!=secret);
    printf("Correct guess! Attempts:%d\n\n",attempts);
    return 0;
}