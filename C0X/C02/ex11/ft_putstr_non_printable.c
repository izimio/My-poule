/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 12:21:16 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/10 20:54:30 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put(unsigned char c)
{
	write(1, &c, 1);
}

 void ft_putstr_non_printable(char *str)
{
		int i;
		char *hex;
		int tmp;

		hex = "0123456789abcdef";
		i = 0;
		while (str[i])
		{
			tmp = str[i];
			if (str[i] < 0)
				tmp += 256;
			if (tmp < 32 || tmp > 126)
			{
				ft_put('\\');
				ft_put(hex[tmp / 16]);
				ft_put(hex[tmp % 16]);
			}
			else
				ft_put(tmp);
			i++;
		}
}

int main(){
char tab[1];
tab[0] = 128;
ft_putstr_non_printable(tab);

}
