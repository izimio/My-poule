/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 08:58:03 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/21 14:40:37 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		file;
	char	c;

	if (argc == 1)
		write(1, "File name missing.\n", 19);
	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	if (argc == 2)
	{
		file = open(argv[1], O_RDONLY);
		if (file == -1)
			write(1, "Cannot read file.\n", 18);
		else
			while (read(file, &c, 1) > 0)
				ft_putchar(c);
		close(file);
	}
	return (0);
}
