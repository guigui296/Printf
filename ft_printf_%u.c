/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_%u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <gbehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:41:25 by gbehra            #+#    #+#             */
/*   Updated: 2024/11/29 09:05:25 by gbehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printu(int nb)
{
	unsigned int	n;
	int				l;

	n = nb;
	l = 0;
	if (n >= 10)
	{
		l += ft_printu (n / 10);
		l += ft_printu (n % 10);
	}
	if (n < 10)
		l += ft_printchar(n + '0');
	return (l);
}
