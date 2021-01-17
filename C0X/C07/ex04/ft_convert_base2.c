/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 04:09:43 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/19 10:54:18 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		tricky(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] <= 32 || base[i] > 126)
			return (0);
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		check(char *base, char c)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int			i;
	int			neg;
	long int	res;
	int			j;

	res = 0;
	i = 0;
	neg = 1;
	j = ft_strlen(base);
	if (tricky(base) == 0)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] && check(base, str[i]) != -1)
	{
		res = res * j + check(base, str[i]);
		i++;
	}
	return (res * neg);
}
