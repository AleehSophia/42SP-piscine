/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasado <acasado@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:30:02 by acasado           #+#    #+#             */
/*   Updated: 2023/03/18 14:48:45 by acasado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int len;
	unsigned int i;

	len = 0;
	i = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

// C,C++ program demonstrate difference between
// strncat() and strcat()
#include <stdio.h>
#include <string.h>
 
int main()
{
   
   // Take any two strings
   char src[50] = "forgeeks";
   char dest1[50] = "geeks";
   char dest2[50] = "geeks";
  
   printf("Before strcat() function execution, ");
   printf("destination string : %s\n", dest1);
    
   // Appends the entire string of src to dest1
   strcat(dest1, src);
  
   // Prints the string
   printf("After strcat() function execution, ");
   printf("destination string : %s\n", dest1);
  
   printf("Before strncat() function execution, ");
   printf("destination string : %s\n", dest2);
    
   // Appends 3 characters from src to dest2
   ft_strncat(dest2, src, 3);
     
   // Prints the string
   printf("After strncat() function execution, ");
   printf("destination string : %s\n", dest2);
    
   return 0;
}