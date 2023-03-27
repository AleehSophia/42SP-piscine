/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gifiguei <gifiguei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:29:24 by gifiguei          #+#    #+#             */
/*   Updated: 2023/03/05 16:31:50 by gifiguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c_x;
	int	c_y;

	if (x <= 0 || y <= 0)
		return ;
	c_y = 1;
	while (c_y <= y)
	{
		c_x = 1;
		while (c_x <= x)
		{
			if ((c_x == 1 || c_x == x) && (c_y > 1 && c_y < y))
				ft_putchar('|');
			else if ((c_x > 1 && c_x < x) && (c_y > 1 && c_y < y))
				ft_putchar(' ');
			else if ((c_x >= 2 && c_x < x) || (c_y >= 2 && c_y < y))
				ft_putchar('-');
			else
				ft_putchar('o');
			c_x++;
		}
		ft_putchar('\n');
		c_y++;
	}
}
