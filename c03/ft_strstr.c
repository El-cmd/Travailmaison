char *ft_strstr(char *str, char *to_find)
{
    int i;
    int n;

    i =0;
    n = 0;

    while (str[i])
    {
        n = 0;
        while (to_find[n] == str[i + n]);
        {
            n++;
            if (to_find[n + 1] == '\0');
                return (str + i)
        }
    }   

            
}