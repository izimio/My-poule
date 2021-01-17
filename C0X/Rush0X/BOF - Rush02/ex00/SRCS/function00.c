/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function00.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 08:46:00 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/25 11:48:51 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*swapword(char *str)
{
	char	*word;

	if (!(word = malloc(sizeof(char) * 3)))
		return (NULL);
	if (ft_strlen(str) == 1 || ft_strlen(str) == 2)
		word[0] = '0';
	if (ft_strlen(str) == 1)
	{
		word[1] = '0';
		word[2] = str[0];
	}
	if (ft_strlen(str) == 2)
	{
		word[1] = str[0];
		word[2] = str[1];
	}
	if (ft_strlen(str) == 3)
	{
		word[0] = str[0];
		word[1] = str[1];
		word[2] = str[2];
	}
	word[3] = '\0';
	return (word);
}
