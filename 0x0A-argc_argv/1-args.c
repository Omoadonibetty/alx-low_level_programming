#include <stdio.h>
		
#include "main.h"
		

		
/**
		
 * main - print number arguments passed to  program
		
 * @argc: arguments number
		
 * @argv: arguments array
		
 *
		
 * Return: Always 0 (Successful)
		
 */
		

		
int main(int argc, char *argv[])
		
{
		
(void) argv; /*Ignore argv*/
		
	printf("%d\n", argc - 1);
		

		
	return (0);
		
}
