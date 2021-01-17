/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 19:20:32 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/21 14:00:21 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		j;
	char	*tmp;
	int		i;

	i = -1;
	while (tab[++i])
	{
		j = 1;
		while (tab[j])
		{
			if ((*cmp)(tab[j - 1], tab[j]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = tmp;
			}
			j++;
		}
	}
}
