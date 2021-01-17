/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:22:03 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/21 10:28:17 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int	i;
	int	res;
	int	negat;

	negat = 1;
	i = 0;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negat *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * negat);
}

void	ft_putnbr(int nb)
{
	long int nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr % 10 + '0');
}

int		ft_atoi_sign(char *str)
{
	int		i;
	int		negat;

	i = 0;
	while (str[i])
		i++;
	if (i > 1)
		return (-5);
	negat = -5;
	i = 0;
	if (str[i] == '+')
		negat = 0;
	if (str[i] == '-')
		negat = 1;
	if (str[i] == '/')
		negat = 2;
	if (str[i] == '*')
		negat = 3;
	if (str[i] == '%')
		negat = 4;
	return (negat);
}
