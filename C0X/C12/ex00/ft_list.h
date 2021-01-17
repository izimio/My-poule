/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrionne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:18:51 by jbrionne          #+#    #+#             */
/*   Updated: 2020/10/22 16:28:14 by jbrionne         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef	struct	s_list
{

	struct s_list	*next;
	void	*data;

}				t_list;
#endif
