/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 17:41:49 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/12 11:47:02 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		count_word(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int		tricky(char *base)
{
	int i;
	int j;
	int trigger;

	trigger = 0;
	j = -1;
	i = -1;
	while (base[++i])
	{
		while (base[++j] != '\0')
		{
			if (base[j] == base[i])
			{
				trigger++;
				if (trigger == 2 || base[i] == '+' || base[i] == '-')
					return (0);
			}
		}
		j = 0;
		trigger = 0;
	}
	return ((i <= 1) ? 0 : 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		l;
	long	nb;

	nb = nbr;
	l = count_word(base);
	if (tricky(base) != 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb >= l)
		{
			ft_putnbr_base(nb / l, base);
		}
		ft_putchar(base[nb % l]);
	}
}
