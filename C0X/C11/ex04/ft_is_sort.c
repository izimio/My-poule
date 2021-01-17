/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 13:38:26 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/21 13:27:00 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort_cross(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = -1;
	while (++i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			return (0);
	}
	return (1);
}

int		ft_is_sort_desc(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = -1;
	while (++i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			return (0);
	}
	return (1);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (((ft_is_sort_cross(tab, length, (*f)) == 1)
				|| (ft_is_sort_desc(tab, length, (*f)) == 1)))
		return (1);
	else
		return (0);
}
