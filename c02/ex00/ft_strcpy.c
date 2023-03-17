/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasado <acasado@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 08:38:41 by acasado           #+#    #+#             */
/*   Updated: 2023/03/15 09:23:16 by acasado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char str1[] = "Hello";
	char str2[] = "Ola";

	printf("%s\n", str1);   // displaying what str1 is before ft_strcpy is used on it
	ft_strcpy(str1, str2);  // calling out functtion ft_strcpy on the strings
	printf("%s\n", str1);  // str1 should now become str2
	return (0);
}