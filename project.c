#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    int number = 50;
    srand(time(NULL));
    int randomnumber = rand() %50;
    int x = randomnumber * 2;
    printf("guess the number\n");
    printf("Here's a clue %d ÷ 2\n", x);
    printf("Enter your guessed number from 0 to %d: ", number);
    int input;
    scanf("%d", &input);

    if (input == randomnumber)
    {
      printf("You win!\n");

    }else
    {
      printf("You lose! Please try again!\n");
    }
     


   
   return 0;
}