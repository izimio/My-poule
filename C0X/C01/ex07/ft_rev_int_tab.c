/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 10:51:46 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/07 18:33:20 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int c;
	int i;

	i = -1;
	size--;
	while (++i < size)
	{
		c = tab[size];
		tab[size] = tab[i];
		tab[i] = c;
		size--;
	}
}
