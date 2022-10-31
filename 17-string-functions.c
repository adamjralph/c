#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 

{

  char string1[10] = "Bro";
  char string2[] = "Code";

  // strlwr                                   This function doesn't work in gcc
  // strupr                                   This function doesn't work in gcc
  // strlen(string1);                         
  // strcat(string1, string2);                appends string2 to end of string1
  // strncat(string1, string2, 1);            appends n characters from string2 to string1
  // strcpy(string1, string2);                copy string2 to string1
  // strncpy(string1, string2, 2);            copy n characters of string2 to string1
  strncpy(string1, string2, 2);

  printf("%s\n", string1);  

  return 0;

}
