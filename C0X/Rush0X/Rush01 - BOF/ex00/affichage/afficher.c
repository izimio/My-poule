/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   afficher.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elabasqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 08:58:51 by elabasqu          #+#    #+#             */
/*   Updated: 2020/10/18 13:00:22 by elabasqu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int *create_tab(char *av);
void ft_afficher_reel_tab(int *tab);
void remplir_tab(int *tab_nb,int *tab_cen);
void ft_afficher_lignes(int *tab);
void ft_changer_01(int *tab_donner,int *tab_voulu);
int verifArgv(char *str);
void ft_putchar(char c);

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a])
	{
		ft_putchar(str[a]);
		a++;
	}
}

int main(int argc, char *argv[])
{
    int *tab_donner;
    int tab_central[16] = {0};

	if (verifArgv(argv[1]) == 0)
	{
		ft_putstr("error");
		return (0);
	}
    tab_donner = create_tab(argv[1]);

    ft_afficher_lignes(tab_donner);

    int a = 0;
    printf("\n");
    a = -1;

    ft_afficher_reel_tab(tab_central);
    ft_changer_01(tab_donner,tab_central);
	printf("\n\n");

	ft_afficher_reel_tab(tab_central);
 }
void ft_changer_01(int *tab_donner,int *tab_voulu)
{
	int a;

	a = 0;
	while(a < 8)
	{
		if(tab_donner[a] == 1)
			tab_voulu[a] = 4;
		a++;
	}
	if (tab_donner[9] == 1)
		tab_voulu[8] = 4;
	if (tab_donner[10] == 1)
		tab_voulu[12] = 4;
	if (tab_donner[13] == 1)
		tab_voulu[11] = 4;
	if (tab_donner[14] == 1)
		tab_voulu[15] = 4;
}
