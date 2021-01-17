/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 08:58:05 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/10 16:07:17 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	linear(int x, int a)
{
	int i;

	i = -1;
	while (++i != x)
	{
		if (a == 0 && i == 0)
			ft_putchar('A');
		if (a == 0 && i == x - 1 && x > 1)
			ft_putchar('C');
		if (a == 1 && i == 0)
			ft_putchar('A');
		if (a == 1 && i == x - 1 && x > 1)
			ft_putchar('C');
		if (i != 0 && i != x - 1)
			ft_putchar('B');
	}
	ft_putchar('\n');
}

void	horiz(int x, int y)
{
	int i;
	int p;

	p = -1;
	while (++p < y - 2)
	{
		i = -1;
		while (++i <= x - 1)
		{
			if (i == 0 || i == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		linear(x, 0);
		if (y > 1)
		{
			horiz(x, y);
			linear(x, 1);
		}
	}
}
