/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 14:45:17 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/18 13:14:01 by elabasqu         ###   ########lyon.fr   */
/*   Updated: 2020/10/18 13:01:21 by elabasqu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>

int		*create_tab(char *av);
int		*res_to_tab(char *res);

int		verifargv(char *str)
{
	int i;
	int count;
	int j;

	j = 0;
	count = 0;
	i = -1;
	while (str[++i])
		if (str[i] == ' ')
			count++;
	while (str[j])
	{
		if (str[j] > '0' && str[j] <= '4')
			j++;
		else
			return (0);
		if (str[j] != '\0')
		{
			if (str[j] == ' ')
				j++;
			else
				return (0);
		}
	}
	return (((i - count) == 16 && count == 15) ? 1 : 0);
}

int		input_is_possible(int *tab)
{
	if (tab[0] == 1 && tab[8] != 1)
		return (0);
	if (tab[3] == 1 && tab[12] != 1)
		return (0);
	if (tab[4] == 1 && tab[13] != 1)
		return (0);
	if (tab[7] == 1 && tab[8] != 1)
		return (0);
	else
		return (1);
}
