/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c <jalves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:15:29 by jalves-c          #+#    #+#             */
/*   Updated: 2022/09/18 16:20:52 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escrever(char p, char s, char t)
{
	write(1, &p, 1);
	write(1, &s, 1);
	write(1, &t, 1);
	if (p != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	p;
	char	s;
	char	t;

	p = '0';
	while (p <= '7')
	{
		s = p + 1;
		while (s <= '8')
		{
			t = s + 1;
			while (t <= '9')
			{
				escrever(p, s, t);
				t++;
			}
			s++;
		}
		p++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/