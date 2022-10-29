#include <stdio.h>
#include <math.h>

int main()

{
  double A;
  double B;
  double C;

  printf("\nEnter side A: ");
  scanf("%lf", &A);

  printf("\nEnter side B: ");
  scanf("%lf", &B);

  C = sqrt(A*A + B*B);

  printf("Side C: %lf", C);

  return 0;
}

// Requres using gcc hypotenuse.c -o hypotenuse -lm
// to link 'l' to math 'm' library