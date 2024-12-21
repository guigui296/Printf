/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_%xX.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <gbehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:19:56 by gbehra            #+#    #+#             */
/*   Updated: 2024/12/21 11:57:57 by gbehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long long nb, const char form)
{
	int		l;
	char	*base;

	l = 0;
	if (form == 'x')
		base = "0123456789abcdef";
	else if (form == 'X')
		base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		l += ft_print_hex(nb / 16, form);
		l += ft_print_hex(nb % 16, form);
	}
	else
		l += ft_printchar(base[nb]);
	return (l);
}
