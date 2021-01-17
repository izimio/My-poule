/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkArgument.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 15:21:38 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/25 14:18:08 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "proto.h"
#include <fcntl.h>

int		argv_number(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		check_argument(char *str)
{
	int i;
	int j;

	i = -1;
	j = 0;
	while (str[++i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			j++;
		else if (str[i] < '0' && str[i] > '9')
			return (0);
	}
	return ((j == argv_number(str)) ? 1 : 0);
}
