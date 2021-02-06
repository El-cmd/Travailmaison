#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
	while (x > 0 && y > 0)
	{
		condition(abs, ord, x, y);
	}

}
