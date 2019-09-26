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

	while (c[i] != '\0')
	{
		if ((c[i] >= 48 && c[i] <= 57) || c[i] == 45)
			i++;
		else
			return (FALSE);
	}
	return (TRUE);
}
