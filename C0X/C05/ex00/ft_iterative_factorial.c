/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 09:08:57 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/12 10:06:10 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;

	if (nb < 0)
		return (0);
	res = 1;
	while (nb != 0)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
