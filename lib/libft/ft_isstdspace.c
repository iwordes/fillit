/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstdspace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 16:42:32 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/05 09:54:18 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isstdspace(int ch)
{
	return (ch == ' ' || ch == '\t' || ch == '\n');
}
