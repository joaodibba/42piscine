#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_rev_print(char *str)
{
	int	len;

	len = (ft_strlen(str));
	while ((len - 1) >= 0)
	{
		write(1, &str[len - 1], 1);
		len--;
	}
	return (str);
}

int	main(int ac, char **av)
{
	ft_rev_print(av[1]);
	return (0);
}
