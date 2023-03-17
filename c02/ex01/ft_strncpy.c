/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasado <acasado@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:22:52 by acasado           #+#    #+#             */
/*   Updated: 2023/03/15 09:47:13 by acasado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	
	return (dest);
}
#include <stdio.h>

int main(void)
{
	char str[] = "test de chaine";
    char *str2 = "chaine de test";

     ft_strncpy(str, str2, 6);
     printf("%s\n", str);
     return 0;
}
