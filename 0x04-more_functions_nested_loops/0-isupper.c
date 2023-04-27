/**
  * _isupper - Entry point
  * @c: The character to scan
  * Description - check for uppercase  character
  *
  * Return: Always 0 (success)
  */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
