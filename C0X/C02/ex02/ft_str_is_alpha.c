/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 14:45:44 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/08 20:58:46 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;
	int alpha;

	i = -1;
	alpha = 1;
	while (str[++i])
		if ((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
			alpha = 1;
		else
			return (0);
	return (alpha);
}
