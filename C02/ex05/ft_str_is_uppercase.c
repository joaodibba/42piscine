/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c <jalves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:34:44 by jalves-c          #+#    #+#             */
/*   Updated: 2022/09/24 18:08:24 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str1 = "ABCDEFGHI";
	str2 = "0BCDEFGHI";
	str3 = "ABCDeFGHI";
	str4 = "ABCDEFGH:";
	printf("str1:  %d\n", ft_str_is_uppercase(str1));
	printf("str2:  %d\n", ft_str_is_uppercase(str2));
	printf("str3:  %d\n", ft_str_is_uppercase(str3));
	printf("str4:  %d\n", ft_str_is_uppercase(str4));
	return (0);
}
*/
