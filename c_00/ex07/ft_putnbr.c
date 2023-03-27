/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasado <acasado@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:49:17 by acasado           #+#    #+#             */
/*   Updated: 2023/03/10 18:06:36 by acasado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digit(int n);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = nb -1;
		write(1, "-", 1);
	}
	if (nb / 10)
	{
		ft_putnbr(nb / 10);
	}
	print_digit(nb % 10);
}

void	print_digit(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}
