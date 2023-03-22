/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasado <acasado@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:35:25 by acasado           #+#    #+#             */
/*   Updated: 2023/03/22 11:52:05 by acasado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digit(int n);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
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

/* int main(void)
{
	ft_putnbr(44);
	return(0);
} */
