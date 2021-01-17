/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 18:46:52 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/07 07:51:06 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int nb)
{
	int nb1;
	int nb2;

	nb1 = nb / 10 + 48;
	nb2 = nb % 10 + 48;
	write(1, &nb1, 1);
	write(1, &nb2, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = -1;
	while (++a <= 98)
	{
		b = 0;
		while (++b <= 99)
		{
			if (a < b)
			{
				print_number(a);
				write(1, " ", 1);
				print_number(b);
				if (a != 98 || b != 99)
				{
					write(1, ", ", 2);
				}
			}
		}
	}
}
