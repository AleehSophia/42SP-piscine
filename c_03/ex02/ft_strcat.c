/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasado <acasado@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:42:30 by acasado           #+#    #+#             */
/*   Updated: 2023/03/18 14:41:05 by acasado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (dest[size])
	{
		size++;
	}
	while (src[i])
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\0';
	return (dest);	
}

#include <stdio.h>
#include <string.h>

int main(void)
{

 char origem[] = {" mundo"};
 char destino[100] = {"Ola"};
 // "Ola mundo"

// char *resultado = strcat(destino, origem);
char * resultado = ft_strcat(destino, origem);

printf("%s", resultado);

//  strcpy(buff, "Hello ");
// ft_strcat(buff, "world");

 /* print the output to test it */
//  printf("%s\n", buff);

 return 0;
} 