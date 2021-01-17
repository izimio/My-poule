/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cutNumber.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduby <tduby@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:23:50 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/25 13:49:53 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		divid_by_three(int nb)
{
	int i;

	i = 0;
	while (nb > 0)
	{
		i++;
		nb -= 3;
	}
	return (i);
}

char	**initmalloc(char *str)
{
	int		nb;
	char	**tab;
	int		strlen;
	int		j;

	j = -1;
	strlen = ft_strlen(str);
	nb = divid_by_three(strlen);
	if (!(tab = (char **)malloc(sizeof(char *) * nb)))
		return (NULL);
	while (++j < nb)
		if (!(tab[j] = (char *)malloc(sizeof(char) * 4)))
			return (NULL);
	return (tab);
}

char	**cut_number(char *str)
{
	int		strlen;
	int		nb;
	int		trigger;
	char	**tab;
	int		j;

	tab = initmalloc(str);
	trigger = 0;
	strlen = ft_strlen(str);
	j = 3;
	nb = 0;
	while (--strlen >= 0)
	{
		j--;
		trigger++;
		if (strlen <= 0 && trigger % 3 != 0)
		{
			while (--j != 0)
				tab[nb][j] = ((j > 1) ? str[strlen] : '\0');
		}
		tab[nb][j] = str[strlen];
		if (trigger % 3 == 0)
		{
			tab[nb][3] = '\0';
			nb++;
			j = 3;
		}
	}
	return (tab);
}

int		main(int argc, char **argv)
{
	char	**tab;
	int		i;

	tab = cut_number(argv[1]);
	i = -1;
	while (tab[++i])
		printf("\\\\\%s\n", tab[i]);
}
