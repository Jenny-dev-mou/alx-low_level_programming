#include "main.h"
/**
 *print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
 void print_alphabet(void) 
{   
  char alphabet = 'a';
  while (alphabet <= 'z'){
    putchar(alphabet);
    alphabet++;
  }
 putchar('\n');
 return (0);
      
}
