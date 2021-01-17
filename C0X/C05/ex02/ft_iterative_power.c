/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 09:50:55 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/12 19:46:02 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	res = 1;
	i = -1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (++i != power)
		res = res * nb;
	return (res);
}
