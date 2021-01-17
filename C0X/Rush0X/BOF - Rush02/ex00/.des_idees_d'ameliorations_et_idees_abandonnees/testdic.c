/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testdic.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 09:06:27 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/25 13:58:35 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

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

int		main(int argc, char **argv)
{
	int		file;
	int		nb_of_line;
	int		desired_line;
	char	c;
	int		j;
	int		i;
	char	**dict_lines;
	int		nb;

	nb = 0;
	file = open(argv[1], O_RDWR);
	while (read(file, &c, 1) > 0)
	{
		if (c == '\n')
			nb++;
	}
	i = -1;
	if (!(dict_lines = (char **)malloc(sizeof(char *) * nb)))
		return (0);
	while (++i < nb)
		if (!(dict_lines[i] = (char *)malloc(sizeof(char) * 51)))
			return (0);
	i = 0;
	j = 0;
	file = open(argv[1], O_RDWR);
	while (read(file, &c, 1) > 0)
	{
		if (c >= 'a' && c <= 'z')
		{
			dict_lines[j][i] = c;
			i++;
		}
		if (c == '\n')
		{
			if (i < 51)
				while (i++ < 51)
					dict_lines[j][i] = '\0';
			j++;
			i = 0;
		}
	}
	close(file);
}
