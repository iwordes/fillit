/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:53:48 by iwordes           #+#    #+#             */
/*   Updated: 2016/11/16 10:53:49 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
** Determines whether some data is in a given list.
*/

int		ft_lstin(t_list *list, void *data, int (*cmp)(void*, void*))
{
	return (ft_lstfind(list, data, cmp) != NULL);
}
