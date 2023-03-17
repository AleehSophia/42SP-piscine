/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasado <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:31:10 by acasado           #+#    #+#             */
/*   Updated: 2023/03/10 14:13:25 by acasado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_number(int n);

void	ft_print_numbers(void)
{
	int	number;

	number = 48;
	while (number <= 57)
	{
		put_number(number);
		number++;
	}
}

void	put_number(int n)
{
	write(1, &n, 1);
}
