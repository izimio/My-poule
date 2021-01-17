/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 10:27:07 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/18 10:12:03 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int check_argc( char **av)
{
	int i;
	int j;

	i = -1;
	while(av[++i])
	{
		j = -1;
		while (av[i][++j])
		{
			if(av[i][j] < '0' || av[i][j] > '9')
				return (0);
		}
	}
	return (0);
}

int *res_to_tab(char *res)
{
	int *tab;
	int i;

	i = 0;
	while (res[i])
		i++;
	if(!(tab = malloc(sizeof(int) * i)))
	i = -1;
	while (res[++i])
		tab[i] = (res[i] - '0');
	return(tab);
}

int *create_tab(char *av)
{
	char *res;
	int i;
	int j;

	j = -1;
	 i = 0;
	 while(av[++i])
		 if(av[i] >= '0' && av[i] <= '9')
			i++;
	 res = malloc(sizeof(char) * i);
	i = -1;
	while(av[++i])
		if(av[i] >= '0' && av[i] <= '9')
			res[++j] = av[i];
	return (res_to_tab(res));
}
