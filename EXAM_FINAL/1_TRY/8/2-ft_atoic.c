#include <unistd.h>
#include <stdio.h>

int ft_atoi(char    *str)
{
    int i;
    int res;
    int sign;

    i = 0;
    res = 0;
    sign = 1;

    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res * sign);
}

int main(int ac, char **av)
{
    printf("%d", ft_atoi(av[1]));
    return (0);
}