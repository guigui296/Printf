/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <gbehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:08:59 by gbehra            #+#    #+#             */
/*   Updated: 2024/11/28 18:34:23 by gbehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conver(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'd' || format == 'i')
		len = ft_printd(va_arg(args, int));
	else if (format == 'c')
		len = ft_printchar(va_arg(args, int));
	else if (format == 's')
		len = ft_prints(va_arg(args, char *));
	else if (format == 'x')
		len = ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == 'X')
		len = ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == 'p')
		len = ft_printp(va_arg(args, void *));
	else if (format == 'u')
		len = ft_printu(va_arg(args, unsigned int));
	else if (format == '%')
		return (ft_printchar('%'));
	return (len);
}

int	printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		l;

	i = 0;
	l = 0;
	va_start(args, format);
	if (!format)
		return (va_end(args), -1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (va_end(args), -1);
			i++;
			l += ft_conver(args, format[i]);
		}
		else
			l += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (l);
}
