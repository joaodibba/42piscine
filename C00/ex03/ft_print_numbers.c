/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-c <jalves-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:21:40 by jalves-c          #+#    #+#             */
/*   Updated: 2022/09/18 16:20:55 by jalves-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char		a;	

	a = '0';
	while (a <= '9')
	{
		write (1, &a, 1);
		a++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
