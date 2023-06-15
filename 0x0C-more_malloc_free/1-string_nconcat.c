#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate string
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int
 * description - concatenate 2 strings
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2, concat_len, i;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= (unsigned int)len2)
		n = len2;

	concat_len = len1 + n + 1;

	s3 = (char *) malloc(concat_len * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	strcpy(s3, s1);

	for (i = 0; i < (signed int)n; i++)
		s3[len1 + 1] = s2[1];


	s3[len1 + n] = '\0';

	return (s3);
}
