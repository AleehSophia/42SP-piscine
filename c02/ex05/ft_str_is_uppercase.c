/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessia <alessia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:49:22 by alessia           #+#    #+#             */
/*   Updated: 2023/03/16 14:55:05 by alessia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int is_upper_case;
	int has_other_char;

	is_upper_case = 0;
	has_other_char = 0;
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z')
		|| *str == ' ')
		{
			is_upper_case = 1;
		}
		else {
			has_other_char = 1;
		}
		str++;
	}
	if (is_upper_case == 1 && has_other_char == 0)
	{
		return (1);
	}
	if(has_other_char == 1)
	{
		return (0);
	}
	return (1);
}

#include <stdio.h>

int main(void)
{
	char *c = "TESTE";
	int result;

	// c = "34teste";
	result = ft_str_is_uppercase(c);
	printf("Resultado esperado: %d", result);
	return (0);
}