#include "main.h"
/**
  * jack_bauer - print every minute of the day
  *
  * Return: Always 0 (success)
  *
  */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			for (k = 0; k <= 2; k++)
			{
				for (l = 0; l <= 2; l++)
				{
					if (i >= 2 && j >= 4)
						break;
					_putchar(i + 48);
					_putchar(j + 48);
					_putchar(58);
					_putchar(k + 48);
					_putchar(l + 48);
					_putchar('\n');
				}
			}
		}
	}
}
