#include <stdio.h>

int main() {

  int x = 5;
  int y = 2;

  float z = x / (float) y;
  int a = x + 5;

  printf("%f\n", z);

  a++;

  printf("%d", a);

  return 0;
}