/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasado <acasado@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:11:04 by acasado           #+#    #+#             */
/*   Updated: 2023/03/17 11:15:11 by acasado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}	
	return str;
}

#include <stdio.h>

int main(void)
{
	char s[] = "DEU CERTO mesmO?";
	ft_strlowcase(s);
	printf("%s", s);
}