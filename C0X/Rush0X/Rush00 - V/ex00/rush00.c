/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 08:58:05 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/10 16:03:47 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	linear(int x)
{
	int i;
	int ix;

	ix = x - 1;
	i = 0;
	while (i <= ix)
	{
		if (i == 0 || i == ix)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
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
				ft_putchar('|');
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
		linear(x);
		if (y > 1)
		{
			horiz(x, y);
			linear(x);
		}
	}
}
