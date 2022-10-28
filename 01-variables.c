#include <stdio.h>

int main() {

  int x; // declaration
  x = 123; // initialization
  int y = 321; // declaration and initalization

  int age = 21; // integer
  float gpa = 2.05; // Floating point number
  char grade = 'C'; // Single character
  char name[] = "Bro"; // Array of characters


  printf("Hello, %s\n", name);
  printf("You are a %d years old\n", age);
  printf("Your average grade is %c\n", grade);
  printf("Your gpa is %f\n", gpa);

  return 0;
}