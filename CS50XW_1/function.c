// #include <stdio.h>

// void meow (void)  // definition of a function 
// {
//     printf("meow\n");
// }
// int main()
// {
//     for (int i = 0; i < 3; i++)
//     {
//         meow(); // calling a function
//     }
// }

// we can move our function to below 
// there is an error (previous implicit declaration of 'meow' with type 'void(void)')
// because the compiler reads our code from top to bottom
// so for removing this error we declare our function with a prototype.
// which tell the compiler that we'll define our function later with the return type and argumen type specified

// #include <stdio.h>
// void meow (void); //  delcarition  or protyping
// int main()
// {
//     for (int i = 0; i < 6; i++)
//     {
//         meow(); // calling a function
//     }
// }

// void meow (void)  // definition of a function 
// {
//     printf("meow\n");
// }


// we can add argument to our meow function

#include <stdio.h>
void meow (int n); //  delcarition  or protyping ,  (type n) which takes some arguments

int main(void)
{
    
  meow(5); // calling a function
    
}

void meow (int n)  // definition of a function  , hesitet copy this function for prototyping and just add semicolon 
{
for (int i = 0; i < n; i++) // that n you must write in this loop
 {
    printf("meow\n");
 }
}

// Conclusion:  if we want to pass some argument to a function for this you can only need to 
// to call in a main and pass no of arguments