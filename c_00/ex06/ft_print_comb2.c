/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasado <acasado@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:57:13 by acasado           #+#    #+#             */
/*   Updated: 2023/03/10 17:45:35 by acasado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_number(int n);

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while (++i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			put_number((i / 10) + '0');
			put_number((i % 10) + '0');
			put_number(' ');
			put_number((j / 10) + '0');
			put_number((j % 10) + '0');
			if (i != 98)
			{
				put_number(',');
				put_number(' ');
			}
		}
	}
}

void	put_number(int n)
{
	write(1, &n, 1);
}
