#include <stdio.h>
int	condition(char c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	if (c >= 'A' && c <= 'Z')
		return 1;
	return 0;
}
int	ft_str_is_alpha(char *str)
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
int	main()
{
	char tab[] = " ";
	printf("%d\n", ft_str_is_alpha(tab));
	return 0;
}
