/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 09:39:11 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/25 13:52:45 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*recursivnumber(char *str)
{
	int *tab;
	int i;
	int nb;

	nb = ft_atoi(str);
	i = 0;
	while (str[i])
		i++;
	if (!(tab = malloc(sizeof(int) * i)))
		return (NULL);
	while (nb > 0)
	{
		tab[i - 1] = nb % 10;
		nb = nb / 10;
		i--;
	}
	return (tab);
}
