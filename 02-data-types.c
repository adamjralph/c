#include <stdio.h>
#include <stdbool.h>

int main() {
  char a = 'C';       // single character %c
  char b[] = "Adam";   // array of characters %s

  float c = 3.141592;     // 4 bytes (32 bits of precision) 6 - 7 digits %f
  double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits %lf

  bool e = true;      // 1 byte (true or false) %d

  char f = 255;       // 1 byte (-128 to +127) %d or %c
  
  // Unsigned ignores positive or negative
  unsigned char g = 12; // 1 byte (0 to +255) %d or %c

  short int h = 32767;  // 2 bytes (-32,768 to +32,767) %d
  unsigned short int i = 65535; // 2 bytes (0 to +65,535) %d


  // printf("%d\n", e);

  // printf("%c\n", f); // Printing an ascii character
  // printf("%c\n", g); // Printing an ascii character

  printf("%d\n", h); // short
  printf("%d\n", i); // short
}

