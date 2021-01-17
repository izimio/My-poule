/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 17:06:19 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/07 07:48:32 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	tricky(char a, char b, char c)
{
	if (a == '7' && b == '8' && c == '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
	}
	else if (a != '7' || b != '8' || c != '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0' - 1;
	while (++a <= '7')
	{
		b = a;
		while (++b <= '8')
		{
			c = b;
			while (++c <= '9')
			{
				tricky(a, b, c);
			}
		}
	}
}
