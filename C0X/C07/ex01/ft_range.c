/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 14:53:47 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/17 07:23:31 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;
	int d;

	d = 0;
	i = min - 1;
	if (min >= max)
		return (NULL);
	else
		tab = malloc(sizeof(int) * (max - min));
	while (++i < max)
	{
		tab[d] = i;
		d++;
	}
	return (tab);
}
