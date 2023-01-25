/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c <jalves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 20:20:01 by jalves-c          #+#    #+#             */
/*   Updated: 2022/09/18 16:20:50 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_if_single(int value)
{
	if (value <= 9)
	{
		ft_putchar('0');
		ft_putchar(value + 48);
	}
	else
	{
		ft_putchar(value / 10 + 48);
		ft_putchar(value % 10 + 48);
	}
}

void	check_if_end(int x)
{
	if (x < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
	y = x + 1;
		while (y <= 99)
		{
			check_if_single(x);
			ft_putchar(' ');
			check_if_single(y);
			check_if_end(x);
			y++;
		}
	x++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/