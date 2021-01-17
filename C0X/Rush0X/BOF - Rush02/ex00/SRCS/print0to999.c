/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print0to999.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 16:07:02 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/25 11:49:24 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "proto.h"

void	ft_print_zero_two_one(int nb, char *str)
{
	int		file;
	int		i;
	char	j;

	i = 0;
	file = open(str, O_RDONLY);
	while (i < nb)
	{
		j = '0';
		while (j != '\n')
			read(file, &j, 1);
		i++;
	}
	j = '0';
	while (j != '\n')
	{
		read(file, &j, 1);
		if (j >= 'a' && j <= 'z')
			ft_putchar(j);
		i++;
	}
	close(file);
}

void	ft_print_zero_to_alot(char *string, char *argv)
{
	int		nb;
	char	*str;

	str = swapword(string);
	nb = ft_atoi(str) % 100;
	if (str[0] != '0')
	{
		ft_print_zero_two_one(str[0] - 48, argv);
		ft_putchar(' ');
		ft_print_zero_two_one(28, argv);
		ft_putchar(' ');
	}
	if (nb < 21)
		ft_print_zero_two_one(nb, argv);
	else if (str[1] != '0')
	{
		ft_print_zero_two_one(str[1] - 48 + 18, argv);
		ft_putchar(' ');
		if (str[2] != '0')
			ft_print_zero_two_one(str[2] - 48, argv);
	}
	ft_putchar('\n');
}
