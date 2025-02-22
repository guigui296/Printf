/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_%p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <gbehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:15:10 by gbehra            #+#    #+#             */
/*   Updated: 2024/11/29 09:16:24 by gbehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printp(void *p)
{
	int	l;

	l = 0;
	if (!p)
		return (ft_prints("(nil)"));
	l += ft_prints("0x");
	l += ft_print_hex((unsigned long long)p, 'x');
	return (l);
}
