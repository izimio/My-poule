/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:22:03 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/21 10:33:27 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "proto.h"

int		calc(int a, int b, int sign)
{
	if (sign == 0)
		return (a + b);
	if (sign == 1)
		return (a - b);
	if (sign == 2)
		return (a / b);
	if (sign == 3)
		return (a * b);
	if (sign == 4)
		return (a % b);
	return (0);
}

int		main(int argc, char **argv)
{
	int		nb1;
	int		sign;
	int		nb2;

	nb1 = ft_atoi(argv[1]);
	sign = ft_atoi_sign(argv[2]);
	nb2 = ft_atoi(argv[3]);
	if (argc == 4)
	{
		if (sign == 2 && nb2 == 0)
		{
			write(1, "Stop : division by zero\n", 24);
			return (0);
		}
		if (sign == 4 && nb2 == 0)
		{
			write(1, "Stop : modulo by zero\n", 22);
			return (0);
		}
		ft_putnbr(calc(nb1, nb2, sign));
		ft_putchar('\n');
	}
}
