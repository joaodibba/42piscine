#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}
char    *ft_strrev(char *str)
{
    int i;
    int size;
    char swap;

    i = 0;
    size = ft_strlen(str) -1;
    while (size > i)
    {
        swap = str[i];
        str[i] = str[size];
        str[size] = swap;
        i++;
        size--;
    }
    return (str);
}
int     main(int ac, char **av)
{
    printf("%s", ft_strrev(av[1]));
    return (0);
}