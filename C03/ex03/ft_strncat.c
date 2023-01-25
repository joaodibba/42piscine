/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c <jalves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 00:56:33 by jalves-c          #+#    #+#             */
/*   Updated: 2022/09/24 18:52:08 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (y < nb && src[y] != '\0')
	{
		dest[i] = src[y];
			i++;
			y++;
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
  printf("Result: %s\n", ft_strncat(str1, str2, 3));
  printf("Expected Result: %s\n", strncat(str3, str4, 3));
  return (0);
}
*/