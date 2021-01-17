/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:52:51 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/22 16:59:17 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <libgen.h>

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

void	print_error(char *argv)
{
	ft_putstr(argv);
}

void	error_log(int nb, char *argv, char *str)
{
	if (nb == 21)
	{
		ft_putstr(basename(str));
		ft_putstr(": ");
		ft_putstr(argv);
		write(1, ": Is a directory\n", 17);
	}
	else if (nb == 2)
	{
		ft_putstr(basename(str));
		ft_putstr(": ");
		ft_putstr(argv);
		write(1, ": No such file or directory\n", 28);
	}
}

int		main(int argc, char **argv)
{
	int		file;
	char	c;
	int		i;

	i = 0;
	errno = 0;
	if (argc == 1)
		while (read(0, &c, 1) > 0)
			ft_putchar(c);
	while (++i < argc)
	{
		file = open(argv[i], O_RDWR);
		if (file == -1)
			error_log(errno, argv[1], argv[0]);
		else
			while (read(file, &c, 1) > 0)
				ft_putchar(c);
		close(file);
	}
	return (0);
}
