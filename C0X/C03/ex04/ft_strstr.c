/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 21:27:30 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/11 12:30:29 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int b;

	i = 0;
	b = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + b] == to_find[b] && str[i + b] != '\0')
			b++;
		if (to_find[b] == '\0')
			return (&str[i]);
		i++;
		b = 0;
	}
	return (0);
}
