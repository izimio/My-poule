/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 10:50:53 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/13 11:45:37 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = -1;
	if (nb < 0)
		return (0);
	if (nb == 4)
		return (2);
	if (nb == 1)
		return (1);
	while (++i < nb / 2 && i < 46341)
	{
		if (i * i == nb)
			return ((nb % i == 0) ? i : 0);
	}
	return (0);
}
#include <limits.h>
#include <stdio.h>
int main(){

printf("%d",ft_sqrt(2116000000));

}
