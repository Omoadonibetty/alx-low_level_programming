#include "function_pointers.h"
	#include <stdio.h>
	/**
	 * print_name - print name using pointer function
	 * @name: string  add
	 * @f: pointer  function
	 * Return: nothing
	 **/
	void print_name(char *name, void (*f)(char *))
	{
		if (name == NULL || f == NULL)
			return;


		f(name);
	}
