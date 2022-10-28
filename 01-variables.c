#include <stdio.h>

int main() {

  int x; // declaration
  x = 123; // initialization
  int y = 321; // declaration and initalization

  int age = 21; // integer
  
  // Float 4 bytes (32 bits of precision) 6 - 7 digits %f
  float gpa = 2.05; 
  // Double 8 bytes (64 bits of precision) 15 - 16 digits %lf
  char grade = 'C'; // Single character %c
  char name[] = "Bro"; // Array of characters


  printf("Hello, %s\n", name);
  printf("You are a %d years old\n", age);
  printf("Your average grade is %c\n", grade);
  printf("Your gpa is %f\n", gpa);

  return 0;
}