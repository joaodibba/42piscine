/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c <jalves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:51:10 by jalves-c          #+#    #+#             */
/*   Updated: 2022/09/28 01:22:41 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 && *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
int main(void) {
  char str1[] = "teste", str2[] = "teste";
  printf("Result: %d\n", ft_strcmp(str1, str2));
  printf("Expected outcome: %d \n", strcmp(str1, str2));
  return (0);
}
*/