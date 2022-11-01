#include <stdio.h>

int main() 
{
  // Nested loop = a loop inside another loop

  int rows;
  int columns;
  char symbol;

  printf("Enter # of rows: ");
  scanf("%d", &rows);

  printf("\nEnter # of columns: ");
  scanf("%d", &columns);

  // Clears the input buffer
  while((getchar()) !='\n');

  printf("Enter a symbol to use: ");
  scanf("%c", &symbol);

  for(int i = 1; i <= rows; i++) 
  {
    for(int j = 1; j <= columns; j++)
    {
      printf("%c", symbol);
    }
    printf("\n");
  }

  return 0;
}