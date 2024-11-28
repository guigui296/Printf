/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_%d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <gbehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:35:00 by gbehra            #+#    #+#             */
/*   Updated: 2024/11/28 16:44:51 by gbehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printd(int nb)
{
	long	n;
	int		l;

	n = nb;
	l = 0;
	if (n < 0)
	{
		l += ft_printchar ('-');
		n *= -1;
	}
	if (n >= 10)
	{
		l += ft_printd (n / 10);
		l += ft_printd (n % 10);
	}
	if (n < 10)
		l += ft_printchar(n + '0');
	return (l);
}
