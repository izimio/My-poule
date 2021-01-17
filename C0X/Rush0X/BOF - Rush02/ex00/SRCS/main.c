/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:16:59 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/25 12:03:18 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"
#include <fcntl.h>

int		check_extension(char *argv)
{
	int k;
	int j;

	j = 0;
	k = argv_number(argv);
	if ((argv[k - 1] == 't') && (argv[k - 2] == 'c') && (argv[k - 3] == 'i')
			&& (argv[k - 4] == 'd') && (argv[k - 5] == '.'))
		return (1);
	return (0);
}

int		check_file(char *str)
{
	int file;

	file = open(str, O_RDONLY);
	if (file == -1)
		return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc == 1 || argc > 3)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (argc == 3 && check_argument(argv[2]) == 1)
	{
		if (check_extension(argv[1]) == 0 || check_file(argv[1]) == 0)
		{
			ft_putstr("Error\n");
			return (0);
		}
		ft_print_zero_to_alot(argv[argc - 1], argv[1]);
	}
	if (argc == 3 && check_argument(argv[2]) == 0)
		ft_putstr("Error\n");
	if (argc == 2 && check_argument(argv[1]) == 1)
		ft_print_zero_to_alot(argv[argc - 1], "numbers.dict");
	else if (argc == 2 && check_argument(argv[1]) == 0)
		ft_putstr("Error\n");
	return (0);
}
