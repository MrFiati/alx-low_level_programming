#include <stdio.h>
/**
 * main - program prints all possible combinations of two two digit nums
 *
 * Return: 0 if success
 */
int main(void)
{
	int x, y;

	x = 0;
	while (x <= 99)
	{
		y = 0;
		while (y <= 99)
		{
			if (x < y)
			{
				putchar((x / 10) + '0');
				putchar((x % 10) + '0');
				putchar(' ');
				putchar((y / 10) + '0');
				putchar((y % 10) + '0');
				if (x != 98 || y != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		y = 0;
		x++;
	}
	putchar('\n');
	return (0);
}
