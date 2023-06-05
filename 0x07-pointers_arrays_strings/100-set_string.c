#include <stdio.h>
/**
 * set_string - set value of pointer to char
 *
 * @s: pointer to char pointer
 * @to: pointer
 *
 * description - set value of pointer to char
 * Return: 0 (success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}
