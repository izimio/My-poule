/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct_affich.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elabasqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 09:14:43 by elabasqu          #+#    #+#             */
/*   Updated: 2020/10/18 12:16:10 by elabasqu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void    ft_lignes_millieu_X(int *tab);
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(char c)
{
	c += 48;
	write(1, &c, 1);
}
void    ft_lignes_millieu(int *tab)
{
    int a;
    int j;
    int x;

    a = 8;
    x = 0;
    j = 12;
    while (a < 12)
    {
        x = 0;
        ft_putnbr(tab[a]);
        ft_putchar(' ');
		a++;
        while (x < 4)
        {
            ft_putchar('0');
        ft_putchar(' ');
            x++;
        }
        ft_putnbr(tab[j]);
        ft_putchar('\n');
		j++;
    }
}
void	ft_ligne(int *tab,int debut,int fin)
{    int j;
    int x;
    int a;

    x = 0;
    while (debut < fin)
    {
            ft_putchar(' ');
			ft_putchar(' ');
        x = 0;
        while (x < 4)
        {
			ft_putnbr(tab[debut]);
			ft_putchar(' ');
            x++;
			debut++;
        }
		ft_putchar(' ');
        ft_putchar('\n');
        a++;
        j++;
    }
}
void ft_afficher_lignes(int *tab)
{
    ft_ligne(tab,0,3);
    ft_lignes_millieu(tab);
    ft_ligne(tab,4,7);
}
void    ft_lignes_millieu_X(int *tab)
{
    int a;
    int j;
    int x;

    a = 8;
    x = 0;
    while (a < 16)
    {
        x = 0;
		ft_putchar(' ');
        while (x < 4)
        {
			ft_putchar(' ');
			ft_putnbr(tab[a]);
            x++;
            a++;
        }
        ft_putchar('\n');
    }
}
void ft_afficher_reel_tab(int *tab)
{
    ft_ligne(tab,0,3);
    ft_lignes_millieu_X(tab);
    ft_ligne(tab,4,7);
}
