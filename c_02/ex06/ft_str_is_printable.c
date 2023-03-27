/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessia <alessia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:59:44 by alessia           #+#    #+#             */
/*   Updated: 2023/03/16 15:47:26 by alessia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int is_printable;
	int non_printable;
	int i;

	is_printable = 0;
	non_printable = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			is_printable = 1;
		}
		else {
			non_printable = 1;
		}
		i++;
	}
	if (is_printable == 1 && non_printable == 0)
	{
		return (1);
	}
	if(non_printable == 1)
	{
		return (0);
	}
	return (1);
}

#include <stdio.h>

int main(void)
{
	char c[1] = {127};
	int result;

	// c = "34teste";
	result = ft_str_is_printable(c);
	printf("Resultado esperado: %d", result);
	return (0);
}