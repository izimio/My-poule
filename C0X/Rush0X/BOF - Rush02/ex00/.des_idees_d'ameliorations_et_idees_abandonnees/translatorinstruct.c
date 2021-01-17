/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translatorInStruct.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 09:07:35 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/25 13:47:00 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int						line_count(char *dict)
{
	int		file;
	int		count;
	char	c;

	count = 0;
	file = open(dict, O_RDONLY);
	while (read(file, &c, 1) > 0)
	{
		if (c == '\n')
			count++;
	}
	return (count);
}

int						count_number_in_line(char *dict, int nb)
{
	int		file;
	int		count;
	char	c;
	int		res;

	res = 0;
	count = 0;
	file = open(dict, O_RDONLY);
	while (read(file, &c, 1) > 0)
	{
		if (count == nb)
		{
			if (c != '\n' && (c >= '0' && c <= '9'))
				res++;
			else
				return (res);
		}
		if (c == '\n')
			count++;
	}
	return (res);
}

int						count_letter_in_line(char *dict, int nb)
{
	int		file;
	int		count;
	char	c;
	int		res;

	res = 0;
	count = 0;
	file = open(dict, O_RDONLY);
	while (read(file, &c, 1) > 0)
	{
		if (count == nb)
		{
			if (c != '\n' && (c >= 'a' && c <= 'z'))
				res++;
			else if (c == '\n' && count == nb)
				return (res);
		}
		if (c == '\n')
			count++;
	}
	return (res);
}

struct	s_arraw_struct	**tabmalloc(char *dict)
{
	int				i;
	int				file;
	char			c;
	t_arr_struct	**arr;

	i = -1;
	if (!(arr = malloc(sizeof(arr_struct) * line_count(dict))))
		return (NULL);
	while (++i < line_count(dict))
	{
		if (!(arr[i]->value = malloc(sizeof(arr_struct)
						* count_number_in_line(dict, i) + 1)))
			return (NULL);
		if (!(arr[i]->string = malloc(sizeof(arr_struct)
						* count_letter_in_line(dict, i) + 1)))
			return (NULL);
	}
	return (arr);
}

struct	s_arraw_struct	**values_to_array(char *dict)
{
	int				i;
	int				file;
	char			c;
	int				j;
	t_arr_struct	**arr;

	i = 0;
	j = 0;
	arr = tabmalloc(dict);
	file = open(dict, O_RDONLY);
	while (read(file, &c, 1) > 0)
	{
		if (c == '\n')
			i++;
		while (c >= '0' && c <= '9')
			arr[i][j].value = &c;
		j++;
		j = 0;
		while (c >= 'a' && c <= 'z')
		{
			arr[i][j].string = &c;
			j++;
		}
	}
	return (arr);
}
