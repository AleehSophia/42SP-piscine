/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessia <alessia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:59:22 by alessia           #+#    #+#             */
/*   Updated: 2023/03/16 14:56:37 by alessia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
    int has_only_numbers;
	int has_other_char;

	has_only_numbers = 0;
	has_other_char = 0;
	while (*str != '\0')
	{
		if ((*str >= '0' && *str <= '9')
		|| *str == ' ')
		{
			has_only_numbers = 1;
		}
		else {
			has_other_char = 1;
		}
		str++;
	}
	if (has_only_numbers == 1 && has_other_char == 0)
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
	char *c = " ";
	int result;

	// c = "34teste";
	result = ft_str_is_numeric(c);
	printf("Resultado esperado: %d", result);
	return (0);
}