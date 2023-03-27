/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alessia <alessia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 08:47:57 by alessia           #+#    #+#             */
/*   Updated: 2023/03/16 14:57:33 by alessia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int has_only_char;
	int has_other_char;

	has_only_char = 0;
	has_other_char = 0;
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z')
		|| (*str >= 'A' && *str <= 'Z')
		|| *str == ' ')
		{
			has_only_char = 1;
		}
		else {
			has_other_char = 1;
		}
		str++;
	}
	if (has_only_char == 1 && has_other_char == 0)
	{
		return (1);
	}
	if(has_other_char == 1)
	{
		return (0);
	}
	return (1);
}

int main(void)
{
	char *c = "teste!";
	int result;

	// c = "34teste";
	result = ft_str_is_alpha(c);
	printf("Resultado esperado: %d", result);
	return (0);
}