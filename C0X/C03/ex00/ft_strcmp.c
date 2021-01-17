/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 13:29:24 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/10 18:36:32 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		str_dif(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}

int		count_str(char *str)
{
	int i;
	int res;

	res = 0;
	i = -1;
	while (str[++i])
		res += str[i];
	return (res);
}

int		ft_strcmp(char *s1, char *s2)
{
	int a;
	int b;

	a = count_str(s1);
	b = count_str(s2);
	if (a < b)
		return (str_dif(s1, s2));
	else
		return (str_dif(s1, s2));
	if (a == b)
		return (str_dif(s1, s2));
}
