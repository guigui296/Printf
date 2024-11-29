/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbehra <gbehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:35:21 by gbehra            #+#    #+#             */
/*   Updated: 2024/11/29 08:57:01 by gbehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);
int	ft_printchar(char c);
int	ft_printd(int nb);
int	ft_prints(char *str);
int	ft_print_hex(unsigned long long nb, const char form);
int	ft_printp(void *p);
int	ft_printu(int nb);

#endif