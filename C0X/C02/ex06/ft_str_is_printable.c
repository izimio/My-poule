/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 21:34:04 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/09 13:17:21 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int alpha;
	int i;

	i = -1;
	alpha = 1;
	while (str[++i])
		if (str[i] >= 32 && str[i] <= 126)
			alpha = 1;
		else
			return (0);
	return (alpha);
}
