// #include <stdio.h>

// int main (void)
// {
//     printf("????");
//     return 0;
// }

// With a for loop we can print any number of question marks with a better design.

// #include <stdio.h>

// int main (void)
// {
//     for (int i = 0; i < 4; ++i)
//     {
//         printf("?");
//     }
//     printf("\n");
// }

// Let's take an input from the user and print OuT number of question mark by using do while loop.

// #include <stdio.h>

// int main (void)
// {
//     int n;
//     do
//     {
//         printf("Enter the Width: ");
//         scanf("%d",&n);
//     }
//     while (n < 1);

//     for (int i= 0; i < n; i++)
//     {
//         printf("?");
//     }

//     printf("\n");
//     return 0;
// }

// We can print Two-dimensional set of block with nested loop. or loop inside of another
/*
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Enter the Width: \n");
        scanf("%d", &n);
    } while (n < 1);

    // for each row
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
        return 0;
    }
}

*/

// we can stop loop early as well  by using loop