#include <stdio.h>

#define MAXLENGTH 100 /* maximum string length */

int getLength( char inputString[], int maxLength ) 
/* Determine length of a string*/
{
    int length = 0;
    char myLetter;

    while ( inputString[length] != '\0' ) {
      myLetter = inputString[length];
      if ( inputString[length] != '\n' ) {
        length = length + 1;
      }
    }

    return length;
}

void reverseString( char inputString[], char reversedString[], int length )
/* Reverses first string into second string */
{
  for (int i=0; i<length; i++) {
    reversedString[i] = inputString[length - i - 1];
  }
}

int main()
{
  /* Declare variables */
  char inputGreeting[] = "Hello, Dave!";
  char reversedGreeting[MAXLENGTH];

  /* Determine length of input string */
  int length = getLength(inputGreeting, MAXLENGTH); 
  
  /* Reverse string using internal function */
  reverseString(inputGreeting, reversedGreeting, length);

  printf("The reverse of \"%s\" is \"%s\" \n", inputGreeting, reversedGreeting);

}