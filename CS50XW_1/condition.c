//#include <cs50.h>
#include <stdio.h>

int main (void)
{
    const int MINE = 2;
    int points ;
    printf("Enter an integer: ");
    scanf("%d",&points);


   if (points < MINE)
   {
       printf("You lose fewer points did you lose? ");

   } 
   else if (points > MINE)
   {
       printf("You lost more points than me. \n");

   } 
   else 
   {
       printf("You lost the same numbers of points as me. \n");

   } 

}