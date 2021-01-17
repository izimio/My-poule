/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:05:21 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/22 16:27:08 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		ft_create_elem(void *data)
{
	t_list *l;

	if (!(l = malloc(sizeof(t_list))))
		return (NULL);
	l->next = NULL;
	l->data = data;
	return (l);
}
