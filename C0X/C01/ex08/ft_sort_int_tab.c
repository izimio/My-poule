/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 11:16:51 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/07 18:23:59 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int transi;

	i = 0;
	size--;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			transi = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = transi;
			ft_sort_int_tab(tab, size);
		}
		else
			i++;
	}
}
