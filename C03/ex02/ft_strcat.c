/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c <jalves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 23:23:39 by jalves-c          #+#    #+#             */
/*   Updated: 2022/09/24 18:49:14 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[y] != '\0')
	{
		dest[i] = src[y];
			y++;
			i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
  char str1[15] = "Hello "; 
  char str2[6] = "World";
  char str3[15] = "Hello "; 
  char str4[6] = "World";
  printf("Result: %s\n", ft_strcat(str1, str2));
  printf("Expected Result: %s\n", strcat(str3, str4));
  return (0);
}
*/