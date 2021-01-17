/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 14:55:43 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/12 18:51:15 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putstr(char *c)
{
	int i;

	i = -1;
	while (c[++i])
		ft_putchar(c[i]);
}

int		main(int argc, char **argv)
{
	int i;

	i = -1;
	argc = '\n';
	putstr(argv[0]);
	ft_putchar(argc);
}
