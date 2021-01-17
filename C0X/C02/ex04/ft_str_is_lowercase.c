/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 21:13:06 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/08 21:29:03 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;
	int num;

	i = -1;
	num = 1;
	while (str[++i])
		if (str[i] >= 'a' && str[i] <= 'z')
			num = 1;
		else
			return (0);
	return (num);
}
