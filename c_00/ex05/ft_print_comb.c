/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasado <acasado@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:22:34 by acasado           #+#    #+#             */
/*   Updated: 2023/03/10 17:40:30 by acasado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j, int k);

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_putchar(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}	
}

void	ft_putchar(int i, int j, int k)
{
	if (!(i == 0 && j == 1 && k == 2))
		write(1, ", ", 2);
	i = i + '0';
	j = j + '0';
	k = k + '0';
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
}
