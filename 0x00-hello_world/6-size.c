  #include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %i bytes(s)\n", sizeof(char));
printf("Size of an int: %i bytes(s)\n", sizeof(int));
printf("Size of a long int: %i byte(s)\n", sizeof(long int));
printf("Size of a float: %i byte(s)\n", sizeof(float));
return (0);
}
100)#!/bin/bash
gcc - S -masm=intel $CFILE

101)#include <unistd.h>

/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 * followed by a new line, to standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
write(2,
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
59);

return(1);
}
