/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 10:46:59 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/20 13:19:56 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int d;
	int count;

	count = 0;
	d = -1;
	while (++d < length)
		if ((*f)(tab[d]) != 0)
			count++;
	return (count);
}
