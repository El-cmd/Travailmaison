#include <stdio.h>
int	condition(char c)
{
	if (c >= 97 && c <= 122)
		return 1;
	return 0;
}
int	ft_str_is_lowercase(char *str)
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
	char tab[] = "{{{";
	printf("%d\n", ft_str_is_lowercase(tab));
	return 0;
}
