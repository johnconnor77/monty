#include "monty.h"
/**
 *_isdigit - program thisgs
 *Result: always return 0
 *@c: variable de entrada
 *Return: value depending on function
 */
int _isdigit(char *c)
{
	int i = 0;

	if (c[0] == '-')
		i = 1;
	while (c[i] != '\0')
	{
		if ((c[i] >= '0' && c[i] <= '9'))
		{
			return (TRUE);
		}
		i++;
	}
	return (FALSE);
}

