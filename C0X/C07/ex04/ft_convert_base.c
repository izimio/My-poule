/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 11:57:12 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/19 10:58:51 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check(char *base, char c);
int		tricky(char *base);
int		ft_atoi_base(char *str, char *base);
int		ft_strlen(char *str);

char	*ft_putnbr_base(int nbr, char *base, char *res, int index)
{
	int		l;
	long	nb;

	nb = nbr;
	l = ft_strlen(base);
	if (nb < 0)
	{
		nb = nb * -1;
		res[index + 1] = '\0';
		res[0] = '-';
	}
	if (nb >= l)
		ft_putnbr_base(nb / l, base, res, index - 1);
	res[index] = base[nb % l];
	return (res);
}

int		count_dive(int nb, char *base_to)
{
	int i;
	int size;

	size = ft_strlen(base_to);
	i = 0;
	if (nb < 0)
		nb = nb * -1;
	while (nb >= 1)
	{
		nb = nb / size;
		i++;
	}
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		i;
	char	*res;

	nb = ft_atoi_base(nbr, base_from);
	i = count_dive(nb, base_to);
	if (tricky(base_from) != 1 || tricky(base_to) != 1)
		return (NULL);
	if (nb < 0)
	{
		res = malloc((i + 2) * sizeof(char));
		i++;
	}
	else
	{
		res = malloc((i + 1) * sizeof(char));
		res[i] = '\0';
	}
	res = (ft_putnbr_base(nb, base_to, res, i - 1));
	return (res);
}
