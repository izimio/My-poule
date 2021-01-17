/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 14:27:40 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/21 10:39:03 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *res;

	i = -1;
	if (length < 1 || (!(res = malloc(sizeof(int) * length))))
		return (NULL);
	while (++i < length)
		res[i] = (*f)(tab[i]);
	return (res);
}
