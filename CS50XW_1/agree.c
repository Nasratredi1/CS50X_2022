#include <stdio.h>

int main ()
{
    char c;    // if you want to declare a  long variable then you can used array.
    // prompt from used to take an input
    printf("Do you agree? ");
    scanf("%c", &c);
    //cheack whether it's agreed or notY

    if (c == 'Y' || c == 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'N' || c == 'n')
    {
        printf("Not Agreed.\n");
    }
    
}