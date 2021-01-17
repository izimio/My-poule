/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 10:04:04 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/11 19:16:53 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;

	d = 0;
	i = 0;
	while (dest[d] && d < size)
		d++;
	while (src[i] && i + d + 1 < size)
	{
		dest[d + i] = src[i];
		i++;
	}
	if (d != size)
		dest[d + i] = '\0';
	return (d + ft_strlen(src));
}
