/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c <jalves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:53:42 by jalves-c          #+#    #+#             */
/*   Updated: 2022/09/24 20:26:57 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] >= 32 && str[i] <= 127)
	{
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = "ABCDEFGHI";
	str2 = "";
	str3 = "\t";
	str4 = "\n";
	printf("str1: %d\n", ft_str_is_printable(str1));
	printf("str2: %d\n", ft_str_is_printable(str2));
	printf("str3: %d\n", ft_str_is_printable(str3));
	printf("str4: %d\n", ft_str_is_printable(str4));
	return (0);
}
*/
