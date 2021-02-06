#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}
void	condition(int abs, int ord, int x, int y)
{
	
}
void	rush0(int x, int y)
{
	int abs;
	int ord;
	abs = 1;
	ord = 1;
	if  (x > 0 && y > 0)
	{
		while (ord <=y)
		{
			while (i <= x)
			
			{
				condition(abs, ord, x, y);
				abs++;
			}
		abs=1;
		ft_putchar('\n');
		j++;

		}
	}

}
