#include <unistd.h>
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}
int main(int argc, char *argv[])
{
    (void)argc;
    ft_putstr(argv[0]);
    return 0;
}