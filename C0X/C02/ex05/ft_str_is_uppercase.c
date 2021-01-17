/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 21:24:08 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/08 21:34:08 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int alpha;
	int i;

	i = -1;
	alpha = 1;
	while (str[++i])
		if (str[i] >= 'A' && str[i] <= 'Z')
			alpha = 1;
		else
			return (0);
	return (alpha);
}
