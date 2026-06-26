//WAP to create quiz application.
#include <stdio.h>
#include <ctype.h>
int main() 
{
    int score=0;
    char answer;
    printf("----- WELCOME TO THE QUIZ -----\n\n");
    printf("1. Which planet is known as the Blue Planet?\n");
    printf("A. Earth\nB. Venus\nC. Jupiter\nD. Saturn\n");
    printf("Your answer: ");
    scanf("%c",&answer);
    if(toupper(answer)=='A') 
    {
        printf("Correct!\n\n");
        score++;
    } 
    else 
    {
        printf("Wrong! The correct answer is A.\n\n");
    }
    printf("2. What is the chemical symbol for gold?\n");
    printf("A. Ga\nB. Al\nC. Au\nD. Be\n");
    printf("Your answer: ");
    scanf(" %c",&answer);
    if(toupper(answer)=='C') 
    {
        printf("Correct!\n\n");
        score++;
    } 
    else 
    {
        printf("Wrong! The correct answer is C.\n\n");
    }
    printf("3. What is the capital of India?\n");
    printf("A. Berlin\nB. Madrid\nC. Rome\nD. New Delhi\n");
    printf("Your answer: ");
    scanf(" %c",&answer);
    if(toupper(answer)=='D') 
    {
        printf("Correct!\n\n");
        score++;
    } 
    else 
    {
        printf("Wrong! The correct answer is D.\n\n");
    }
    printf("----- QUIZ OVER -----\n");
    printf("Your total score: %d out of 3\n",score);
    return 0;
}