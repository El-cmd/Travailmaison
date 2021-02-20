#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
 
int main (int argc, char *argv[])
{
    (void)argc;
    int i;
    i = 1;
    while (argv[i])
    {
        ft_putstr(argv[i]);
        ft_putchar('\n');
        i++;
    }
    return 0;
}