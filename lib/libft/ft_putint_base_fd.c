/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 10:01:37 by iwordes           #+#    #+#             */
/*   Updated: 2016/10/05 10:01:39 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

static void		ft_putint_base_fd_body(long long integer, int base, int fd)
{
	if (integer / base != 0)
		ft_putint_base_fd_body(integer / base, base, fd);
	ft_putchar_fd(BASE64[ft_absolute(integer % base)], fd);
}

void			ft_putint_base_fd(long long integer, int base, int fd)
{
	if (base >= 2 && base <= 64)
	{
		if (integer < 0)
			ft_putchar_fd('-', fd);
		ft_putint_base_fd_body(integer, base, fd);
	}
}
