#include <unistd.h>
#include <stdio.h>

char    ft_atoi(const char *str)
{
    int i;
    int res;
    int sign;

    i = 0;
    sign = 1;
    res = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] != '\0' && str[i] 48 && str[i] <= 57)
    {
        res *= 10;
        res += str[i] - '0';
        i++;
    }
    return (res * sign);
}

int main(int ac, char **av)
{
    printf("%d \n", ft_atoi(av[1]));
    return (0);
}