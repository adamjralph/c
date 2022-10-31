#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 

{

  char string1[] = "Bro";
  char string2[] = "Code";

  // strlwr                                   This function doesn't work in gcc
  // strupr                                   This function doesn't work in gcc
  // strlen(string1);                         
  // strcat(string1, string2);                appends string2 to end of string1
  // strncat(string1, string2, 1);            appends n characters from string2 to string1
  // strcpy(string1, string2);                copy string2 to string1
  // strncpy(string1, string2, 2);            copy n characters of string2 to string1
  // strset(string1, '?');                    This function doesn't work in gcc
  // strnset(string1, 'x', 1);                This function doesn't work in gcc
  // strrev(string1);                         This function doesn't work in gcc
  // strlen()                                 String length

  // int result = strlen(string1);
  // int result = strcmp(string1, string2);   Compare strings
  // int result = strcmpi(string1, string2);     Compare strings - doesn't work
  // int result = strnicmp(string1, string2, 1); string compate n characters (ignore case) doesn't work
  let c = "C"
  int tolower(c);

  printf("%s\n", c);  

//  if(result == 0)
//  {
//    printf("These strings are the same\n");
//  } else {
//    printf("These strings are not the same\n");
//  }
//
  return 0;

}
