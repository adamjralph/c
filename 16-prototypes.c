#include <stdio.h>

// Prototype
void hello(char[], int);

int main()
{
  // Function prototype
  //
  // Function declaration, w/o a body, before main()
  // Ensure that calls to a function are made with the corrrect arguments

  // IMPORTANT NOTES
  // Many C compilers do not check for parameter matching
  // Missing arguments will result in unexpected behaviour
  // A function prototype causes the compiler to flag an error if arguments are missing

  // ADVANTAGES 
  // 1. Easier to navigate a program w/ main() at the top
  // 2. Helps with debugging
  // 3. Commonly used in header files

  char name[] = "Bro";
  int age = 21;

  hello(name, age);

  return 0;
}

void hello(char name[], int age)

{
  printf("\nHello %s", name);
  printf("\nYou are %d years old", age);
}
