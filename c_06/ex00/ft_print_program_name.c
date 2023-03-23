/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acasado <acasado@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:20:46 by acasado           #+#    #+#             */
/*   Updated: 2023/03/23 15:18:04 by acasado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print(char *c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int i;

    i = argc;
    i = 0;
    while (argv[0][i] != '\0')
    {
        write(1, &argv[0][i], 1);
        i++;
    }  
    write(1, "\n", 1);
}
