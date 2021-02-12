#include <stdio.h>
int	condition(char c)
{
	if (c >= 65 && c <= 90)
		return 1;
	return 0;
}
int	ft_str_is_uppercase(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		if (!(condition(str[i])))
			return 0;
		i++;
	}
	return 1;
}
int main ()
{
	char tab[] = "\0";
	printf("%d\n",ft_str_is_uppercase(tab));
	return 0;
}
