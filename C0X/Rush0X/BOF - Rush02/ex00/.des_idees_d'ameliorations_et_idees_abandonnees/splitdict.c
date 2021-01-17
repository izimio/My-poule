/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TRUEsplit_dict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 11:39:02 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/24 12:35:41 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int		nb_of_line_in_dict(char *str)
{
	int		nb;
	int		file;
	char	c;

	nb = 0;
	file = open(str, O_RDWR);
	while (read(file, &c, 1) > 0)
	{
		if (c == '\n')
			nb++;
	}
	return (nb);
}

char	**worldmalloc(char *str)
{
	int		i;
	char	**dict_lines;

	i = -1;
	if (!(dict_lines = (char **)malloc(sizeof(char *)
					* nb_of_line_in_dict(str))))
		return (0);
	while (++i < nb_of_line_in_dict(str))
		if (!(dict_lines[i] = (char *)malloc(sizeof(char) * 51)))
			return (0);
	return (dict_lines);
}

char	**ft_split_dictionnary(char *str)
{
	int		file;
	char	c;
	int		j;
	int		i;
	char	**dict_lines;

	i = 0;
	j = 0;
	dict_lines = worldmalloc(str);
	file = open(str, O_RDWR);
	while (read(file, &c, 1) > 0)
	{
		if (c >= 'a' && c <= 'z')
			dict_lines[j][i++] = c;
		if (c == '\n')
		{
			while (i++ < 51)
				dict_lines[j][i] = '\0';
			j++;
			i = 0;
		}
	}
	return (dict_lines);
}
