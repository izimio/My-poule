/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_numeric.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 20:59:10 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/09 13:16:35 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int i;
	int num;

	i = -1;
	num = 1;
	while (str[++i])
		if (str[i] >= '0' && str[i] <= '9')
			num = 1;
		else
			return (0);
	return (num);
}
