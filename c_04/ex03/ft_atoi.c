/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasado <acasado@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:53:58 by acasado           #+#    #+#             */
/*   Updated: 2023/03/22 14:30:53 by acasado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	n;

	i = 0;
	n = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10;
		n = n + (str[i] - '0');
		i++;
	}
	return (n * sign);
}

/* #include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int main() {
	printf("%i\n", ft_atoi("\t\n\v\f\r      23"));
	printf("%i\n", ft_atoi("     ------+++++---12341"));
	printf("%i\n", ft_atoi("     ------+++++---123413"));
	printf("%i\n", ft_atoi("00000000002147483647"));
	printf("%i\n", ft_atoi("-2147483648"));
	printf("%i\n", ft_atoi("a"));
}*/
