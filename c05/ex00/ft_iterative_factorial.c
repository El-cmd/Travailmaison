#include <stdio.h>
int ft_itterative_factorial(int n)
{   
    int i;
    int w;
    i = 2;
    w = 1;

    while (i <= n)
    { 
        w = w * i;
        i++;
    }
    return w;
}
int main ()
{
    printf("%d", ft_itterative_factorial(2));
    return 0;
}