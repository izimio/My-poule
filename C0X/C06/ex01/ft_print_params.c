/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 18:06:00 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/12 20:19:53 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	int i;

	i = -1;
	while (c[++i])
		ft_putchar(c[i]);
}

int		main(int argc, char **argv)
{
	int i;
	int d;

	d = -1;
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
}
