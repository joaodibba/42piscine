#include <unistd.h>
int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
        len--;
	}
	return (str);
}

int main(int ac, char **av)
{
    int i;

	i = 0; 
    if (ac == 2)
    {
        ft_strrev(av[1]);
    
    	while (av[1][i] != '\0')
    	{	
            write(1, &av[1][i], 1);
            i++;
        }
    }
}