/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 15:32:50 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/17 03:14:57 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		incharset(char c, char *charset)
{
	int i;

	i = -1;
	while (charset[++i])
		if (charset[i] == c)
			return (1);
	return (0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str, int i, int lenght)
{
	char	*string;
	int		j;

	j = 0;
	string = malloc(sizeof(*string) * (lenght + 1));
	while (j < lenght)
	{
		string[j] = str[i + j];
		j++;
	}
	string[j] = '\0';
	return (string);
}

int		countword(char *str, char *charset)
{
	int count;
	int i;

	count = 0;
	i = -1;
	while (str[++i])
		if (!(incharset(str[i], charset)) && count++)
			while (str[i] && !(incharset(str[i], charset)))
				i++;
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		count;
	int		start;

	if (!(tab = malloc(sizeof(*tab) * countword(str, charset))))
		return (0);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (!(incharset(str[i], charset)))
		{
			start = i;
			while (str[i] && !incharset(str[i], charset))
				i++;
			tab[count] = ft_strdup(str, start, i - start);
			count++;
		}
		i++;
	}
	tab[count] = 0;
	return (tab);
}
